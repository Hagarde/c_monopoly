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

gobelet Gobelet = gobelet(); // d√©finir une varaibel globale

int main() {

	Plateau plateau = Plateau();
	plateau.creerCases();

	plateau.affciheCouleurs();

	plateau.afficheCases();

	std::cout << "Bienvenue dans le logiciel Monopoly de ORY Victor , ROYANT Kilian, CHAPLAIN Nicolas, GOURC Corentin" << std::endl ;
	int nmbrJoueur ;

	/*try {
	        std::cout << "Veuiller entrer le nombre de joueur : " << std::endl ;
	        std::cin >> nmbrJoueur ;
	    }
	    catch (...) {
	        std::cout << "Erreur : Veuillez entrer un entier." << std::endl ;
	    }
*/
	std::cout << "Veuillez entrer le nombre de joueur : " << std::endl ;
	std::cin >> nmbrJoueur ;
	joueur* listeJoueur = new joueur[nmbrJoueur];

	// Cr√©ation du plateau de mani√®re √† pouvoir placer le pion sur la carte d√©part



	for (int i = 0 ; i < nmbrJoueur ; i ++ ) {

		std::string nomJoueur;
		std::cout << "Comment s'appelle le Joueur " << i + 1 << "?" << std::endl;
		std::cin >> nomJoueur ;
		std::string nomPion ;
		std::cout << "Entrer le nom du pion que vous voulez selectionner pour le jouer numero " <<  i+1 << std::endl ;
		std::cin >> nomPion ;

		pion* ptPion = new pion(nomPion,plateau.getListeCase());

		joueur* ptJoueur = new joueur(nomJoueur,ptPion);
		listeJoueur[i] = *ptJoueur;

		ptPion->setJoueur(ptJoueur);
		std::cout<<"Le  joueur "<<(ptPion->getJoueur())->getNom()<<" a ÈtÈ crÈÈ"<<std::endl;
		ptPion->setPosition(plateau.getCase(0));
	}

	std::cout<< "La phase de creation des joueurs est finie ! " << std::endl;

	for (int i = 0 ;  i < nmbrJoueur ; i ++ ) {
		pion* ptPionaffiche = listeJoueur[i].getptPion();
		//std::cout<<ptPionaffiche->getNom()<<std::endl;
		//std::string NomPion = ptPionaffiche->getNom();
		std::string casedepart = ptPionaffiche->getPosition()->getNom();
		std::cout << "La position actuelle du pion "<<listeJoueur[i].getptPion()->getNom()<<" du joueur "<< listeJoueur[i].getNom() <<" est la case : " << casedepart << std::endl;
	}
	jeu Jeu = jeu();


	// initialisation de la case des joueurs

	// On commence la partie

	gobelet Gobelet = gobelet();

	while (Jeu.getCompteur() < 100 )  {
		for (int i = 0 ; i < nmbrJoueur ; i ++){
			(listeJoueur[i]).jouer( plateau , Gobelet);
		}

	}
	return 0;
}
