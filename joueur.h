/*
 * joueur.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */



#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <iostream>
#include "Case.h"
#include "pion.h"
#include "Plateau.h"
#include "gobelet.h"

class pion;
class Plateau ;

class joueur {
	private :
		std::string Nom; //Définir le nom du joueur, c'est pratique si c'est le même que le pion
		pion* ptPion ; //Pointeur vers le pion : le joueur doit savoir où se trouve son pion
		int solde ; //La THUNE possédée par le joueur
		bool prison ; // Si le joueur est ecutellement en prison
		int temps_prison ; // indique l enombre de tours depusi que le joueur est enferpe en prison
		int carte_liberation ; // nombre de carte libération de prison que le joeueur possède
		
	public:
        bool isOut();
		joueur();
		joueur(std::string nom,pion* ptPion ); //Constructeur du joueur
		virtual ~joueur(); //Destructeur mais qu'on utilisera sûrement pas : le joueur reste là jusqu'à la fin du jeu
	
		std::string getNom(){return this->Nom;}; //Return le nom du joueur. Pas de setters associé, ce sera défini lors de la création de l'objet Joueur
	
		void setptPion(pion* ptPion){this->ptPion = ptPion;}; //On set le pion du joueur avec tous ses attributs associés
		pion* getptPion(){return this->ptPion;}; //On get le pion du joueur, avec tous ses attributs associés

		int getSolde(){return this->solde;}; //On get la THUNE du joueur.
	
		void jouer(Plateau plateau); //Le joueur réalise un tour de jeu
		void crediter(int credit); //On donne de l'argent au joueur
		void debiter(int debit); //On débite de l'argent au joueur

		int getCartePrison(){return this->carte_liberation;};
		void setCartePrison(int nombre){this->carte_liberation = nombre;};

		void entrerPrison(){ this->prison =true; this->temps_prison = 0 ; } // Rajouter TELEPORTATION PRISON
		bool getPrison(){return this->prison;};


};

#endif /* JOUEUR_H_ */
