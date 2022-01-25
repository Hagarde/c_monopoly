#ifndef COMPAGNIE_H_
#define COMPAGNIE_H_
#include "gobelet.h"
#include "propriete.h"

class compagnie: public propriete {
private :

public:
	compagnie();
	compagnie(std::string nom,int* ptLoyer=NULL , int prixAchat=0, Case* suivante=NULL, joueur* ptProprietaire=NULL);
	virtual ~compagnie();
	void arreterSur(joueur* ptJoueur) ;
};

#endif /* COMPAGNIE_H_ */
