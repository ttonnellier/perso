#ifndef EXTPERSONNE_H
#define EXTPERSONNE_H

#include <algorithm>
#include "personne.h"

class ExtPersonne : public Personne
{
public:
    virtual void afficheInfos() const;
};

#endif // EXTPERSONNE_H
