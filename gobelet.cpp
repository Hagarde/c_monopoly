/*
 * gobelet.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "gobelet.h"

gobelet::gobelet() {
	de1 = de();
	de2 = de();
}

gobelet::~gobelet() {
	// TODO Auto-generated destructor stub
}

void gobelet::lancer(){
	de1.lancer();
	de2.lancer();
}

bool gobelet::Double() {
	return (de1.getValeur() == de2.getValeur());
}
