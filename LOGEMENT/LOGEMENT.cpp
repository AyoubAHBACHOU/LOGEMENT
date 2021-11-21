// LOGEMENT.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include "logementt.h"
#include "Appartement.h"
#include "Maison.h"
#include "Quartier.h"

using namespace immob;
using namespace std;


int main()
{
    //logementt L1("quartier far immob qods etage 3", 120, 3, 0.5);
    //L1.afficher();
    //double t = L1.taxe();
    //cout << t << endl;
    Appartement A1("A1", 80, 2, 0.4, 2);
    //A1.afficher();
    //double t = A1.taxe();
    //cout << t << endl;
    Appartement A2("A2", 100, 3, 0.4, 3);
    //if (!A1.cmp_log(A2))
        //cout << "true" << endl;
    Maison M1("M1", 100, 3, 0.4, 120, true);
    //M1.afficher();
    //cout <<M1.taxe()<<endl;
    //cout << endl;
    Maison M2("M2", 100, 3, 0.4, 120, false);
    //M2.afficher();
    //cout << M2.taxe() << endl;
    //cout << endl;
    double t = A1.taxe() + A2.taxe() + M2.taxe() + M1.taxe();
    cout << t << endl;
    Quartier Q1("lhassania");
    Q1.ajouter_log(A1);
    Q1.ajouter_log(A2);
    Q1.ajouter_log(M1);
    Q1.ajouter_log(M2);
    Q1.afficher_quart();
    cout << "taux total du quartier" << endl;
    cout<<Q1.cumule_taxe();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.


