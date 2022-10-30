#include <iostream> // Inclut la bibliotheque iostream (affichage de texte)
#include <string>
#include <cmath>
#include <vector>

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
Sert dans le cas ou on ne veut pas qu'une copie de notre variable soit strockée en memoire
car elle représente un trop gros volume de donnees mais on ne veut pas non plus qu'elle puisse
etre modifiee dans la fonction
*/
void passageParRefConstant (string const& texte) {
}

void tableaux ()
{
    int const tailleTableau(3);
    double anglesTriangle[tailleTableau];

    for(int i = 0 ; i < tailleTableau ; i++) {
        anglesTriangle[i] = i;
    }

    int const nbrNote = 4;
    double notes[nbrNote];
    notes[0] = 15.;
    notes[1] = 16.;
    notes[2] = 12.;
    notes[3] = 14.4;
    double somme = 0;
    double moyenne;

    for(int i = 0; i < nbrNote ; i++) {
        somme += notes[i];
    }

    moyenne = somme/nbrNote;
    cout << moyenne << endl;



}

//Les valeurs du tableau seront bien changees pas besoin de mettre un & devant on agit deja sur sa case memoire
void passageParReferenceTableau(double tableau[])
{


}

//besoin de mettre un & pour le passage par reference avec les tableaux dynamiques
void refTabDynamique(vector<double> const& a, vector<int> &b)
{
    b.push_back(9);
}

//besoin de #include <vector> pour utiliser ces tableaux
void tableauxDynamiques()
{
    vector<int> tableau(5);
    vector<int> tableauBis(5, 3); //tableau de 5 entiers valant tous 3
    tableauBis.push_back(8); //On ajoute une 6 case au tableau avec comme valeur 8
    tableauBis.pop_back(); //On enleve la derniere case du tableau donc le 8
    int const tabBisSize = tableauBis.size();


    vector<double> tabNote;
    tabNote.push_back(14.3);
    tabNote.push_back(15.6);
    tabNote.push_back(13.2);
    double moyenne(0.);

    for(int i = 0; i < tabNote.size() ; i++) {
        moyenne += tabNote[i];
    }
    moyenne /= tabNote.size();
    cout << moyenne << endl;
    refTabDynamique(tabNote, tableauBis);
    for(int i = 0; i < tableauBis.size() ; i++) {
        cout << tableauBis[i] << endl;
    }

}

void tableauMultiDimension()
{
    int tableauT[4][5];
    int const tailleX = 5;
    int const tailleY = 4;
    int tableau[tailleX][tailleY];

}

//Pas trop utilisé car non optimisé
void tabDynMultiDim()
{
    vector<vector<int> > grille;
    grille.push_back(vector<int>(5));
    grille.push_back(vector<int>(3,4));
}

void stringTab()
{
   string nomUtilisateur("Julien");
   cout << "Vous etes " << nomUtilisateur << "." <<endl;

   nomUtilisateur[0] = 'L';  //On modifie la première lettre
   nomUtilisateur[2] = 'c';  //On modifie la troisième lettre

   cout << "Ah non, vous etes " << nomUtilisateur << "!" << endl;

   string prenom("Albert");
   string nom("Einstein");

   string total;    //Une chaîne vide
   total += prenom; //On ajoute le prénom à la chaîne vide
   total += " ";    //Puis un espace
   total += nom;    //Et finalement le nom de famille

   cout << "Vous vous appelez " << total << "." << endl;


}

void passagePointeur(int &age)
{
    age = 4;
}

void pointeur()
{
    //adresse 0 signifie qu'il ne contient l'adresse d'aucune case
    int *ptr(0);
    double *pointeurA(0);
    unsigned int *pointeurB(0);
    string *pointeurC(0);
    vector<int> *pointeurD(0);
    int const *pointeurE(0);

    int ageUtilisateur(8);
    //Adresse de ageUtilisateur dans le pointeur
    ptr = &ageUtilisateur;
    cout << "l'adresse de ageUtilisateur est " << &ageUtilisateur << endl;
    cout << "La veleur de pointeur est : " << ptr << endl;
    cout << "La valeur de la variable pointee est : " << *ptr << endl;

    passagePointeur(*ptr);
    cout << "Valeur modifiee de l'age est : " << *ptr << endl;

    //allocation memoire d'un entier
    //Notre pointeur pointe vers une case memoire de la taille d'un entier qui est non initialisee
    int *pointeur(nullptr);
    pointeur = new int;
    if(pointeur) { //Verifie si le pointeur pointe vers une adresse memoire
        cout << pointeur << endl;
        *pointeur = 2;
        delete pointeur;
        pointeur = nullptr;
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
    //tableaux();
    //tableauxDynamiques();
    pointeur();
    return 0;
}


