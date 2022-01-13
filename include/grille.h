#ifndef GRILLE_H
#define GRILLE_H

#include "constante.h"
#include "bateau.h"
#include "case.h"
#include "iostream"
#include "vector"

class Grille {
private:
	Case* grille[TAILLE_GRILLE][TAILLE_GRILLE];
public:
	//methode
	void display_grid(float r_x, float t_x, float scale);
	void add_boat(Bateau* bat);
	Case* getCase(int x,int y) {return grille[x][y];}
    Grille();
};

#endif