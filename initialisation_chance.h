/*
 * initialisation_cartes.h
 *
 *  Created on: 12 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef INITIALISATION_CHANCE_H_
#define INITIALISATION_CHANCE_H_


#include "Carte.h"
#include "depart.h"
#include "Plateau.h"

Carte* initialisation_chance(Plateau plateau) {
	Carte* pile_carte_chance = new Carte[16];
	depart* ptDepart1 = &depart("depart 1",NULL);

	// Je crée chaque carte avec text gain perte deplacement telportation
	pile_carte_chance[0] = Carte("Allez directement sur la Case Départ",NULL,NULL,NULL,ptDepart1);
	pile_carte_chance[1] = Carte("Interpol vous arrête, rendez-vous en prison sans passer par la case départ",0,0,0); // A remplacer par la case prison
	pile_carte_chance[2] = Carte("Rendez-vous au Boulevard de la Villette",0,0,0); // NULL à remplacer par case 11 du plateau
	pile_carte_chance[3] = Carte("Vous recevez un e amende pour conduite en état d'ivresse, payer 20 €",0,20);
	pile_carte_chance[4] = Carte("Vous gagnez un concours de mots croisés, recevez 100 €",100);
	pile_carte_chance[5] = Carte("Rendez-vous à la rue Henri Martin ",0,0,0);// dernier null à remplacer par la case 24 du plateau
	pile_carte_chance[6] = Carte("Rendez-vous à la gare de Lyon",0,0,0); // replace null => 15
	pile_carte_chance[7] = Carte("Vous avez été contrôlé avec un excès de vitesse de 80 km/h, veuillez payer 150 €",0,150,0);
	pile_carte_chance[8] = Carte("Payer les frais de scolarité de votre enfant, veuillez payer 150 €",0,150,0);
	pile_carte_chance[9] = Carte("Reculez de trois cases",0,0,3); // REcule de 3 cases
	pile_carte_chance[10] = Carte("Payer les réparations de vos maisons : 25 € / Maison , 100 € /Hôtel",0,0,0,NULL); // Plus compliqué que prévu il faudr afaire un triuc exprès
	pile_carte_chance[11] = Carte("Votre prêt rapporte 150 €",150,0,0,NULL);
	pile_carte_chance[12] = Carte("Conservez cette carte pour pouvoir être libéré de prison",0,0,0,NULL); // Enocre les enbrouilles
	pile_carte_chance[13] = Carte("Rendez-vous à la Rue de la Paix",0,0,0,NULL); // NULL à remplacr par #40
	pile_carte_chance[14] = Carte("La banque vous verse 50 €",50,0,0,NULL);
	pile_carte_chance[15] = Carte("A cause d'une catastrophe naturelle, veuillez payer des réparations lourdes  : 40 € / Maison , 100 € /Hôtel",0,0,0,NULL);

	return pile_carte_chance ;
}


#endif /* INITIALISATION_CHANCE_H_ */