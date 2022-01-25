/*
 * gare.h
 *
 *  Created on: 23 dec. 2021
 *      Author: aveyronvictor
 */

#ifndef GARE_H_
#define GARE_H_

#include "propriete.h"


class gare : public propriete {
private:
	gare* ptGares;
public:
	gare();
	gare(std::string nom, int prixAchat=200, Case* suivante=NULL, joueur* ptProprietaire=NULL,int* ptLoyer=NULL);
	virtual ~gare();
	void setptGares(gare* ptGares ){this->ptGares = ptGares;};
	void arreterSur(joueur* ptJoueur);
};

#endif /* GARE_H_ */
