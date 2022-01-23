/*
 * gare.h
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#ifndef GARE_H_
#define GARE_H_


#include "propriete.h"

class gare: public propriete {
public:
	gare();
	gare(string nom, int prixAchat=200, Case* suivante=NULL, joueur* ptProprietaire=NULL,int* ptLoyer = NULL);
	virtual ~gare();
	void setNom(string Nom){this->nom =Nom;};
	void arreterSur(joueur* ptJoueur);
};

#endif /* GARE_H_ */
