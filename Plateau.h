/*
 * Plateau.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PLATEAU_H_
#define PLATEAU_H_

#include <string>
#include "depart.h"
#include "prison.h"
#include "allezPrison.h"
#include "caseinutile.h"
#include "communaute.h"
#include "chance.h"
#include "taxe.h"
#include "gare.h"
#include "Terrain.h"
#include "compagnie.h"
#include "Carte.h"

class Plateau {
private:
	Case* liste_case ;
	couleur* liste_propriete;
public:
	Plateau();
	virtual ~Plateau();
	void creerCases();
	//void lierCases();
	Case* getCase(int IDCase );
	Case* getListeCase(){return this->liste_case;};
	void afficheCases();
	void affciheCouleurs ();
};

#endif /* PLATEAU_H_ */
