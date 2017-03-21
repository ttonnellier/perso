#include "extpersonne.h"


void ExtPersonne::afficheInfos() const {

    cout << "[";
    if( (age() >= 0 ) && (age() < 12) ) cout << "ENFANT       : ";
    if( (age() >= 12) && (age() < 18) ) cout << "ADOLESCENT   : ";
    if( (age() >= 18) && (age() < 65) ) cout << "ACTIF        : ";
    if( (age() >= 65) && (age() < 99) ) cout << "RETRAITE     : ";
    cout << prenom().at(0) << ".";

    string str = nomFamille();
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
    cout << "-";

    if( anneeNaissance() < 2000 )
      cout << (anneeNaissance() - 1900);
    else
      cout << (anneeNaissance() - 2000);
    cout << "] ";
    
    Personne::afficheInfos();
}
