/*
 * Plateau.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PLATEAU_H_
#define PLATEAU_H_

#include "Case.h"
#include "initialisation_propriete.cpp"
#include "depart.h"
#include "prison.h"
#include "allezPrison.h"
#include "caseinutile.h"
#include "communaute.h"
#include "chance.h"
#include "taxe.h"
#include "gare.h"

class Plateau {
private:
	Case* liste_case ;
	couleur* liste_propriete ;
public:
	Plateau();
	virtual ~Plateau();
	void creerCases();
	void lierCases();
	Case* getCase(int IDCase );
	Carte* initialisation_cartes_chance();
	Carte* initialisation_cartes_communaute();
};

#endif /* PLATEAU_H_ */
