/*
 * couleur.h
 *
 *  Created on: 20 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef COULEUR_H_
#define COULEUR_H_

#include "propriete.h"
class joueur;
class propriete; // declaration an ticipée

class couleur {
private:
	propriete* liste_propriete ;
	std::string nom;
	int longueur ;
public:
	couleur();
	couleur(std::string nom,int longueur, propriete* liste_propriete);
	propriete* getListePropriete(){return this->liste_propriete;};
	std::string getNom(){return this->nom;};
	int getLongueur(){return this->longueur;};
	bool check_monopole(joueur* ptJoueur);
	virtual ~couleur();
	int checkGare(joueur* ptJoueur);
};

#endif /* COULEUR_H_ */
