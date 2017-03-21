#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

#define HOMME           true
#define FEMME           false

#define CELIBATAIRE     true
#define MARIE           false

class Personne
{

public:
    Personne();
    Personne(bool homme, int AdN, std::string prenom, std::string nomFamille, bool celibataire);
    Personne(const char * filename);
    ~Personne();

    //getters
    string prenom()         const;
    string nomFamille()     const;
    int    anneeNaissance() const;
    int    age()            const;
    bool   homme()          const;
    bool   celibataire()    const;

    //print
    virtual void afficheInfos() const;

    //files
    bool loadFromFile (const char * filename);
    bool saveToFile   (const char * filename);


protected:
    bool        m_homme;
    int         m_AdN; // année de naissance
    std::string m_prenom;
    std::string m_nomFamille;
    bool        m_celibataire;

};

#endif // PERSONNE_H
