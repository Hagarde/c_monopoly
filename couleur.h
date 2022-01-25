/*
 * couleur.h
 *
 *  Created on: 20 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef COULEUR_H_
#define COULEUR_H_

#include "Terrain.h"
class joueur;
class Terrain; // declaration anticipee

class couleur {
private:
	Terrain* liste_propriete ;
	std::string nom;
	int longueur ;
public:
	couleur();
	couleur(std::string nom,int longueur, Terrain* liste_propriete);
	Terrain* getListePropriete(){return this->liste_propriete;};
	std::string getNom(){return this->nom;};
	int getLongueur(){return this->longueur;};
	bool check_monopole(joueur* ptJoueur);
	virtual ~couleur();
	int checkGare(joueur* ptJoueur);
};

#endif /* COULEUR_H_ */
