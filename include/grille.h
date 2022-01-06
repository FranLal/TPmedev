#ifndef GRILLE_H
#define GRILLE_H

#include "bateau.h"
#include "case.h"
#include "iostream"
#include "vector"

class Grille {
private:
	Case* grille[10][10];
public:
	//methode
	void display_grid();
	void add_boat(Bateau* bat);

    Grille();
};

#endif