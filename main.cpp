#include <iostream> // Inclut la bibliotheque iostream (affichage de texte)
#include <string>

using namespace std; //Indique quel espace de noms on va utiliser

void testReference(int& ref) {
    ref = 3;
}

void basesDeProgrammation() {
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

void exerciceCalcul() {
    cout << "Saisissez un premier nombre : " << endl;
    int premierNombre(0);
    cin >> premierNombre;
    cout << "Saisissez un deuxieme nombre : " << endl;
    int deuxiemeNombre(0);
    cin >> deuxiemeNombre;
    cout << "Le resultat de la multiplication est : " << premierNombre*deuxiemeNombre << endl;
}
/*
Fonction principale main
Tous les programmes commencent par la fonction main
*/
int main()
{
    //basesDeProgrammation();
    exerciceCalcul();

    return 0;
}


