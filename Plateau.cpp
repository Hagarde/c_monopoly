/*
 * Plateau.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Plateau.h"


Plateau::Plateau() {
	// TODO Auto-generated constructor stub
	this->liste_case = NULL;
	this->liste_propriete= NULL;
}

Plateau::~Plateau() {
	// TODO Auto-generated destructor stub
}

void Plateau::creerCases() {
	// Initialisation des 3 cases communaute

	communaute communaute1 = communaute("communaute1");
	communaute communaute2 = communaute("communaute2");
	communaute communaute3 = communaute("communaute3");

	Carte* pile_carte_communaute = this->initialisation_cartes_communaute();

	communaute1.setPile_carte_commmuanute(pile_carte_communaute);
	communaute2.setPile_carte_commmuanute(pile_carte_communaute);
	communaute3.setPile_carte_commmuanute(pile_carte_communaute);

	// initialisation des 3 cases chance
	chance chance1 = chance("chance1");
	chance chance2 = chance("chance2");
	chance chance3 = chance("chance3");

	Carte* pile_carte_chance = this->initialisation_cartes_chance();

	chance1.setPile_carte_chance(pile_carte_chance);
	chance2.setPile_carte_chance(pile_carte_chance);
	chance3.setPile_carte_chance(pile_carte_chance);

	// initialisation des cases taxes

	taxe impot  = taxe("impôt sur le revenue");
	taxe luxe = taxe("Taxe de luxe ");

	//initailisation case inutile

	case_inutile parc_gratuit = case_inutile("parc gratuit");

	// initialisation  allez en prison

	allezPrison police = allezPrison("Allez en Prison");

	// initialisation case depart prison

	depart Depart = depart("depart");
	prison Prison = prison("prison");


	// initialisation de toutes les proprietes et gare


	couleur* liste_couleur = new couleur[9];

	liste_couleur = initialisation_propriete();

}

//void Plateau::lierCases() {}. On vire cette méthode pour l'instant

Case* Plateau::getCase(int IDCase ){
	return &(this->liste_case[IDCase]);
}

Carte* Plateau::initialisation_cartes_chance(){
	Carte* pile_carte_chance = new Carte[15];

	// Je crée chaque carte avec text gain perte deplacement telportation
	pile_carte_chance[0] = Carte("Allez directement sur la Case Départ",0,0,0,this->getCase(0));
	pile_carte_chance[1] = Carte("Interpol vous arrête, rendez-vous en prison sans passer par la case départ",0,0,0); // A remplacer par la case prison
	pile_carte_chance[2] = Carte("Rendez-vous au Boulevard de la Villette",0,0,0,this->getCase(11)); // NULL à remplacer par case 11 du plateau
	pile_carte_chance[3] = Carte("Vous recevez un e amende pour conduite en état d'ivresse, payer 20 €",0,20);
	pile_carte_chance[4] = Carte("Vous gagnez un concours de mots croisés, recevez 100 €",100);
	pile_carte_chance[5] = Carte("Rendez-vous à la rue Henri Martin ",0,0,0,this->getCase(24));// dernier null à remplacer par la case 24 du plateau
	pile_carte_chance[6] = Carte("Rendez-vous à la gare de Lyon",0,0,0,this->getCase(15)); // replace null => 15
	pile_carte_chance[7] = Carte("Vous avez été contrôlé avec un excès de vitesse de 80 km/h, veuillez payer 150 €",0,150,0);
	pile_carte_chance[8] = Carte("Payer les frais de scolarité de votre enfant, veuillez payer 150 €",0,150,0);
	pile_carte_chance[9] = Carte("Reculez de trois cases",0,0,3); // REcule de 3 cases
	pile_carte_chance[10] = Carte("Payer les réparations de vos maisons : 25 € / Maison , 100 € /Hôtel",0,0,0,NULL); // Plus compliqué que prévu il faudr afaire un triuc exprès
	pile_carte_chance[11] = Carte("Votre prêt rapporte 150 €",150,0,0,NULL);
	pile_carte_chance[12] = Carte("Conservez cette carte pour pouvoir être libéré de prison",0,0,0,NULL); // Encore les enbrouilles
	pile_carte_chance[13] = Carte("Rendez-vous à la Rue de la Paix",0,0,0,this->getCase(40)); // NULL à remplacr par #40
	pile_carte_chance[14] = Carte("La banque vous verse 50 €",50,0,0,NULL);

	return pile_carte_chance ;

}

Carte* Plateau::initialisation_cartes_communaute(){
	Carte* pile_carte_communaute = new Carte[16];

		// Je crée chaque carte avec text gain perte deplacement telportation
	pile_carte_communaute[0] = Carte("Payez le police d'assurance : 50 euros",0,50);
	pile_carte_communaute[1] = Carte("Vous héritez de 100 euros",100);
	pile_carte_communaute[2] = Carte("Conservez cette carte pour pouvoir être libéré de prison");
	pile_carte_communaute[3] = Carte("Payez la note du médecin : 50 euros",0,50);
	pile_carte_communaute[4] = Carte("Vous gagnez le 2nd prix de beauté, recevez 100 euros",100);
	pile_carte_communaute[5] = Carte("Les contributions vous remboursent 20 euros",20);
	pile_carte_communaute[6] = Carte("Recevez vos intérêts : 25 euros",25);
	pile_carte_communaute[7] = Carte("Retournez à Boulevard de Belleville",0,0,0,this->getCase(1));
	pile_carte_communaute[8] = Carte("Aller en prison",0,0,0,this->getCase(10));
	pile_carte_communaute[9] = Carte("Placez vous sur la Case Départ",0,0,0,this->getCase(0));
	pile_carte_communaute[10] = Carte("C'est votre anniversaire. Chaque joueur vous donne 20 euros.");
	pile_carte_communaute[11] = Carte("Recevez 100 euros",100);
	pile_carte_communaute[12] = Carte("Payez une amende de 10 euros ou tirez une carte chance");
	pile_carte_communaute[13] = Carte("Erreur de la banque en votre faveur, recevez 200 euros",200);
	pile_carte_communaute[14] = Carte("Vente de votre stock, recevez 50 euros",50);
	pile_carte_communaute[15] = Carte("Payez les frais d'hôpital : 100 euros",0,100);

	return pile_carte_communaute;
}
