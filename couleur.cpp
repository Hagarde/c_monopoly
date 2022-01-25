/*
 * couleur.cpp
 *
 *  Created on: 20 janv. 2022
 *      Author: aveyronvictor
 */

#include "couleur.h"
#include "joueur.h"

couleur::couleur(){
	this->nom = "No Name";
	this->longueur =0 ;
	this->liste_propriete = NULL ;

}

couleur::couleur(std::string nom,int longueur, propriete* liste_propriete) {
	// TODO Auto-generated constructor stub
	this->nom = nom;
	this->longueur = longueur ;
	this->liste_propriete = liste_propriete;
}

couleur::~couleur() {
	// TODO Auto-generated destructor stub
}

bool couleur::check_monopole(joueur* ptJoueur){
	joueur Joueur = *ptJoueur;
	int longueur = this->longueur;
	for (int i = 0 ; i< longueur; i++) {
		propriete propriete_a_evaluer = this->liste_propriete[i]; // On check si c'est le meme proprio pour tout la couleur
		joueur* proprietaire = propriete_a_evaluer.GetProprietaire();
		if ( proprietaire != ptJoueur  ){
			return false;
		}
	}
	return true;
}

int couleur::checkGare(joueur* ptJoueur){
	int compteur = 0 ;
	for (int i = 0; i < this->longueur; i ++) {
		propriete propri = this->liste_propriete[i];
		if (propri.GetProprietaire() == ptJoueur) {
			compteur += 1 ;
		}}
	return compteur ;


}
