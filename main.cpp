#include "personne.h"
#include "extpersonne.h"

#include <vector>   //Etape3
#include <sstream>  //Etape3

int main(int argc, char *argv[])
{
///// ETAPE    2 /////////////////////////////////////////////////
    cout << endl << "# AVANT SAUVEGARDE DES DONNEES #" << endl;
    Personne P1(HOMME, 1969, "John", "Doe", CELIBATAIRE);
    P1.afficheInfos();
    P1.saveToFile("personne_01.txt");

    Personne P2(HOMME, 1969, "John", "Doe", MARIE);
    P2.afficheInfos();
    P2.saveToFile("personne_02.txt");

    Personne* P3 = new Personne(FEMME, 1969, "Jane", "Doe", CELIBATAIRE);
    P3->afficheInfos();
    P3->saveToFile("personne_03.txt");
    delete P3;

    Personne* P4 = new Personne(FEMME, 1969, "Jane", "Doe", MARIE);
    P4->afficheInfos();
    P4->saveToFile( "personne_04.txt" );
    delete P4;

    cout << endl << "# APRES SAUVEGARDE DES DONNEES #" << endl;

    Personne P5("personne_01.txt"); P5.afficheInfos();
    Personne P6("personne_02.txt"); P6.afficheInfos();
    Personne P7("personne_03.txt"); P7.afficheInfos();
    Personne P8("personne_04.txt"); P8.afficheInfos();
//////////////////////////////////////////////////////////////////

///// ETAPE    3 /////////////////////////////////////////////////
    // vector<Personne*> liste;
    // string filename_ = "perso/personne_";
    // int cmp=0;

    // for (int i=0;i<100;i++){ //on parcourt les 100 noms de fichiers possible
    //    stringstream ss;
    //    ss << filename_ << (i<10?"0":"") << i << ".txt";
    //    string filename = ss.str();

    //    Personne* P = new Personne();
    //    if (P->loadFromFile(filename.c_str())){ //si on peut lire le fichier
    //        liste.push_back(P);
    //        cmp++;
    //    }
    //    else
    //        delete P; //sinon on delete l'instance
    // }

    // for(unsigned int i=0; i<liste.size(); i++){ //on affiche tout ce que l'on a ramassé
    //        Personne* p = liste.at( i );
    //        p->afficheInfos();
    // }

    // while (!liste.empty()){ // on delete tout
    //        Personne* p = liste.back();
    //        liste.pop_back();
    //        delete p;
    // }
    // cout << "Un total de " << cmp << " fichiers ont été lus." << endl;
//////////////////////////////////////////////////////////////////

///// ETAPE    4 /////////////////////////////////////////////////
    // vector<Personne*> liste;
    // string filename_ = "perso/personne_";
    // int cmp=0;

    // for (int i=0;i<100;i++){ //on parcourt les 100 noms de fichiers possible
    //     stringstream ss;
    //     ss << filename_ << (i<10?"0":"") << i << ".txt";
    //     string filename = ss.str();

    //     Personne* P = new ExtPersonne();
    //     if (P->loadFromFile(filename.c_str())){ //si on peut lire le fichier
    //         liste.push_back(P);
    //         cmp++;
    //     }
    //     else
    //         delete P; //sinon on delete l'instance
    // }

    // for(unsigned int i=0; i<liste.size(); i++){ //on affiche tout ce que l'on a ramassé
    //         Personne* p = liste.at( i );
    //         p->afficheInfos();
    // }

    // while (!liste.empty()){ // on delete tout
    //         Personne* p = liste.back();
    //         liste.pop_back();
    //         delete p;
    // }
    // cout << "Un total de " << cmp << " fichiers ont été lus." << endl;
//////////////////////////////////////////////////////////////////

    return 0;
}
