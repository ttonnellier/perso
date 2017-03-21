#include "personne.h"


Personne::Personne() 
: m_homme(1), m_AdN(1969), m_prenom("John"), m_nomFamille("Doe"), m_celibataire(1)
{
    //constructeur par defaut
}

Personne::~Personne()
{
    //destructeur
    //pas d'alloc dynamique pour personnage donc pas destructeur inutile
}

Personne::Personne(bool homme, int AdN, string prenom, string nomFamille, bool celibataire) 
: m_homme(homme), m_AdN(AdN), m_prenom(prenom), m_nomFamille(nomFamille), m_celibataire(celibataire)
{
    //constructeur complet
}

Personne::Personne(const char * filename){
    loadFromFile (filename);
}

string Personne::prenom()         const {return m_prenom;}
string Personne::nomFamille()     const {return m_nomFamille;}
int    Personne::anneeNaissance() const {return m_AdN;}
int    Personne::age()            const {return 2014 - anneeNaissance();}
bool   Personne::homme()          const {return m_homme;}
bool   Personne::celibataire()    const {return m_celibataire;}

void Personne::afficheInfos() const
{
    cout << (homme() ? "M. " : "Mme ") 
         << prenom() << " " 
         << nomFamille() << " est né" 
         << (homme() ? " en " : "e en ") 
         << anneeNaissance() << " (" 
         << age() << " ans), ";
    cout << (homme() ? "il est " : "elle est ") 
         << (celibataire() ? "celibataire." : (homme() ? "marié." : "mariée.")) 
         << endl;
}

bool Personne::loadFromFile (const char * filename){
    string buf;
    ifstream myFile(filename);
    if (!myFile.is_open()){
        cout << "Can't read file: " << filename << endl;
        return false;
    }

    getline(myFile, buf); m_homme       = atoi(buf.c_str());
    getline(myFile, buf); m_AdN         = atoi(buf.c_str());
    getline(myFile, buf); m_prenom      = buf;
    getline(myFile, buf); m_nomFamille  = buf;
    getline(myFile, buf); m_celibataire = atoi(buf.c_str());
    myFile.close();
    return true;
}

bool Personne::saveToFile (const char * filename){
    ofstream myFile(filename);
    if (!myFile.is_open()){
        cout << "Can't write in file: " << filename << endl;
        return false;
    }
    myFile << homme()          << endl
           << anneeNaissance() << endl
           << prenom()         << endl
           << nomFamille()     << endl
           << celibataire()    << endl;
    myFile.close();
    return true;
}
