/*
 * Pion.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PION_H_
#define PION_H_

#include <iostream>



class joueur;
class Case;
class Plateau ;


class pion {
	private :
		joueur* ptJoueur ; //Nom du joueur associé au Pion
		Case* ptPosition ; //Position du pion sur le plateau
		std::string nom ; //Nom du pion
	public:
		pion(); //Constructeur du pion
		pion(std::string nom,Case* ptPosition);
		virtual ~pion(); //Destructeur du pion, inutile s'il reste jusqu'à la fin de la partie mais on le laisse pour la beauté du geste

		void setJoueur ( joueur* Joueur ) {this->ptJoueur = Joueur;}; //Définis quel joueur possède ce pion
		joueur* getJoueur () { return this->ptJoueur; }; //Return quel joueur possède ce pion

		void setPosition(Case* truc) {this->ptPosition = truc;}; //Définis la case sur laquelle se situe le pion
		Case* getPosition() {return this->ptPosition;}; //Return la position où se trouve le pion

		void setNom(std::string nom){this->nom = nom;}; //Définis le nom du pion
		std::string getNom(){return this->nom;}; //Return le nom du Pion

		void deplacer(int combien,Plateau plateau); //Déplace le pion sur le plateau
};

#endif /* PION_H_ */
