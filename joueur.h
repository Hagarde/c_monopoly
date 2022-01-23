/*
 * joueur.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */



#ifndef JOUEUR_H_
#define JOUEUR_H_


#include "Case.h"
#include "pion.h"

class joueur {
	private :
		std::string Nom; //Définir le nom du joueur, c'est pratique si c'est le même que le pion
		pion Pion ; //Pointeur vers le pion : le joueur doit savoir où se trouve son pion
		int solde ; //La THUNE possédée par le joueur
		bool prison ; // Si le joueur est ecutellement en prison
		int temps_prison ; // indique l enombre de tours depusi que le joueur est enferpe en prison
		int carte_liberation ; // nombre de carte libération de prison que le joeueur possède
		
	public:
		joueur();
		joueur(std::string nom,pion Pion ); //Constructeur du joueur
		virtual ~joueur(); //Destructeur mais qu'on utilisera sûrement pas : le joueur reste là jusqu'à la fin du jeu
	
		std::string getNom(){return this->Nom;}; //Return le nom du joueur. Pas de setters associé, ce sera défini lors de la création de l'objet Joueur
	
		void setPion(pion Pion){this->Pion = Pion;}; //On set le pion du joueur avec tous ses attributs associés
		pion getPion(){return this->Pion;}; //On get le pion du joueur, avec tous ses attributs associés
	
		void setSolde(int solde ){this->solde=solde;}; //On set la THUNE du joueur. Utile ?
		int getSolde(){return this->solde;}; //On get la THUNE du joueur.
	
		void jouer(); //Le joueur réalise un tour de jeu
		void crediter(int credit); //On donne de l'argent au joueur
		void debiter(int debit); //On débite de l'argent au joueur

		int getCartePrison(){return this->carte_liberation;};
		void setCartePrison(int nombre){this->carte_liberation = nombre;};

		void entrerPrison(){ this->prison =true; this->temps_prison = 0 ; } // Rajouter TELEPORTATION PRISON
		bool getPrison(){return this->prison;};
};

#endif /* JOUEUR_H_ */
