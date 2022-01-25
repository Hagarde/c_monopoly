//============================================================================
// Name        : tp6-test.cpp
// Author      : vory
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "banque.h"
#include "Case.h"
#include "banque.h"
#include "chance.h"
#include "compagnie.h"
#include "de.h"
#include "compagnie.h"
#include "depart.h"
#include "gobelet.h"
#include "jeu.h"
#include "joueur.h"
#include "pion.h"
#include "gare.h"
#include "prison.h"
#include "Plateau.h"
#include "Terrain.h"

gobelet Gobelet = gobelet(); // définir une varaibel globale

int main() {

	Plateau plateau = Plateau();
	plateau.creerCases();

	plateau.affciheCouleurs();

	plateau.afficheCases();

	std::cout << "Bienvenue dans le logiciel Monopoly de ORY Victor, CHAPLAIN Nicolas, GOURC Corentin et ROYANT Killian" << std::endl ;
	int nmbrJoueur ;
    try {
        std::cout << "Veuiller entrer le nombre de joueur : " << std::endl ;
        std::cin >> nmbrJoueur ;
    }
    catch (...) {
        std::cout << "Erreur : Veuillez entrer un entier." << std::endl ;
    }

	joueur* listeJoueur = new joueur[nmbrJoueur];

	// Création du plateau de manière à pouvoir placer le pion sur la carte départ



	for (int i = 0 ; i < nmbrJoueur ; i ++ ) {

		std::string nomJoueur;
		std::cout << "Comment s'appelle le Joueur " << i + 1 << "?" << std::endl;
		std::cin >> nomJoueur ;
		std::string nomPion ;
		std::cout << "Entrer le nom du pion que vous voulez sélectionner pour le jouer numéro " <<  i << std::endl ;
		std::cin >> nomPion ;

		pion* ptPion = new pion(nomPion,plateau.getListeCase());
		pion Pion = *ptPion ;

		joueur* ptJoueur = new joueur(nomJoueur,ptPion);
		joueur Joueur = *ptJoueur;
		listeJoueur[i] = Joueur;
		Pion.setJoueur(ptJoueur);
		Pion.setPosition(plateau.getListeCase());
	}

	std::cout<< "La phase de création des joueurs est finie ! " << std::endl;

	for (int i = 0 ;  i < nmbrJoueur ; i ++ ) {
		pion ptPionaffiche = *listeJoueur[i].getptPion();
		std::string Pionaffiche = ptPionaffiche.getNom();
		std::string casedépart = ptPionaffiche.getPosition()->getNom();
		std::cout << "La position actuelle du pion"<< Pionaffiche << "du joueur "<< listeJoueur[i].getNom() <<" est la case : " << casedépart << std::endl;
	}

	jeu Jeu = jeu();


	// initialisation de la case des joueurs

	// On commence la partie

	//gobelet Gobelet = gobelet();

	while (Jeu.getCompteur() < 100 )  {
		for (int i = 0 ; i < nmbrJoueur ; i ++){
			joueur Joueur = listeJoueur[i];
			Joueur.jouer( plateau , Gobelet);
		}
	}
	return 0;
}
