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

	Case NomBidon = *plateau.getCase(12);
	std::cout<<NomBidon.getNom()<< std::endl;

	plateau.affciheCouleurs();

	plateau.afficheCases();

	std::cout << "Bienvenue dans le logiciel Monopoly de ORY Victor , ROYANT Kilian, CHAPLAIN Nicolas, GOURC Corentin" << std::endl ;
	int nmbrJoueur ;
	std::cout << "Veuillez entrer le nombre de joueur : " << std::endl ;
	std::cin >> nmbrJoueur ;
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

		joueur* ptJoueur = new joueur(nomJoueur,ptPion);
		listeJoueur[i] = *ptJoueur;

		ptPion->setJoueur(ptJoueur);
		std::cout<<"Le  joueur "<<(ptPion->getJoueur())->getNom()<<" a �t� cr��"<<std::endl;
		ptPion->setPosition(plateau.getCase(0));
	}

	std::cout<< "La phase de création des joueurs est finie ! " << std::endl;

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
			joueur Joueur = listeJoueur[i];
			Joueur.jouer( plateau , Gobelet);
		}

	}
	return 0;
}
