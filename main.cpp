#include <iostream> // Inclut la bibliotheque iostream (affichage de texte)
#include <string>
#include <cmath>

using namespace std; //Indique quel espace de noms on va utiliser

void testReference(int& ref)
{
    ref = 3;
}

void basesDeProgrammation()
{
    cout << "Hello world!" << endl << "Changement de ligne effectue" << endl;
    cout <<"Affichage backslash et guillemets  \" \\ " << endl;
    //Commentaire
    /* Commentaire */

    //Initialisation variable avec valeur
    int ageUtilisateur(16);
    int nombreAmis(32);
    double pi(3.14159);
    bool estMonAmi(true);
    char lettre('a');
    string prenom("Albert"), nom("Einstein");

    //Initialisation variable sans valeur
    string nomJoueur;
    int nombreJoueurs;
    bool aGagne;

    /*
    Une variable peut etre consideree comme une case mémoire avec une etiquette portant un nom
    Dans la vraie vie , on peut tres bien mettre plusieurs etiquettes sur un objet donne, c'est
    la meme chose en C++ : on peut coller plusieurs etiquettes a une case memoire
    donc on peut y acceder sous differents moyens : c'est la référence
    */
    int& maReference(ageUtilisateur); //Declaration de maVariable qui est accrochée a ageUtilisateur
    //maReference fait reference a ageUtilisateur


    cout << "Votre age est : "<< ageUtilisateur << endl;
    cout << "Votre age est via la reference : " << maReference << endl;

    //Passage par reference pour modifier la valeur d'une variable dans une fonction
    testReference(maReference);

    cout << "Votre age est : "<< ageUtilisateur << endl;

    cout << "Comment vous appelez-vous ? " << endl;
    getline(cin, nomJoueur); //Permet de faire en sorte que le cin prenne en compte les espaces de notre string

    cout << "Quel age avez vous ? " << endl;
    cin >> maReference; //ici pas besoin qu'ils soient pris en compte
    cout << "Vous vous appelez " << nomJoueur << " Vous avez " << ageUtilisateur << " ans !" << endl;

    //Si on utilise d'abord cin puis getline le code ne fonctionne pas donc apres le premier cin il faut faire un cin.ignore()

    int const nombreNiveaux(10);
}

void exerciceCalcul()
{
    cout << "Saisissez un premier nombre : " << endl;
    int premierNombre(0);
    cin >> premierNombre;
    cout << "Saisissez un deuxieme nombre : " << endl;
    int deuxiemeNombre(0);
    cin >> deuxiemeNombre;
    cout << "Le resultat de la multiplication est : " << premierNombre*deuxiemeNombre << endl;
}

void incrementation()
{
    int a = 10;
    int b, c;
    b = a++;
    c = ++a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

void fonction_maths()
{
    //Besoin de include cmath
    double const nombre(16); //Le nombre dont on veut la racine
    //Comme sa valeur ne changera pas on met 'const'
    double resultat;         //Une case mémoire pour stocker le résultat
    resultat = sqrt(nombre);  //On effectue le calcul !

    cout << "La racine de " << nombre << " est " << resultat << endl;

    //4 puissance 5
    double const a(4);
    double const b(5);
    double const resultatBis = pow(a,b);

}

void condition ()
{
    int nbAnimaux(2);

    if (nbAnimaux == 0)
    {
        cout << "Vous n'avez pas d'animaux de compagnie" << endl;
    }
    else if (nbAnimaux == 1)
    {
        cout << "C'est super d'avoir un fidele compagnon !" << endl;
    }
    else if (nbAnimaux == 2)
    {
        cout << "Ca doit en faire du monde a la maison !" << endl;
    }
    else
    {
        cout << "Votre budget croquettes doit etre important" << endl;
    }

    cout << "Fin du programme" << endl;
}

void switchEx ()
{
    int nbAnimaux(2);

    switch (nbAnimaux)
    {
        case 0:
            cout << "Vous n'avez pas d'animaux de compagnie" << endl;
            break;

        case 1:
            cout << "C'est super d'avoir un fidele compagnon !" << endl;
            break;

        case 2:
            cout << "Ca doit en faire du monde a la maison !" << endl;
            break;

        default:
            cout << "Votre budget croquettes doit etre important" << endl;
            break;
    }
}

void whileForEx ()
{
    int nbEnfants(0);

    do
    {
        cout << "Combien d'enfants avez-vous ?" << endl;
        cin >> nbEnfants;
    } while (nbEnfants < 0);

    cout << "Merci d'avoir indique un nombre d'enfants correct. Vous en avez " << nbEnfants << endl;
    for (int compteur(0) ; compteur < 10 ; compteur++)
    {
        cout << compteur << endl;
    }

}
/*
Fonction principale main
Tous les programmes commencent par la fonction main
*/
int main()
{
    //basesDeProgrammation();
    //exerciceCalcul();
    //incrementation();
    //condition();
    //switchEx();

    return 0;
}


