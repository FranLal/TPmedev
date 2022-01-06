#include "case.h"

Case::Case(int x,int y, int contenu) {
    this->x = x;
    this->y = y;
	this->contenu = contenu;
}

void Case::setContenu(int nouveau_contenu) {
	this->contenu = nouveau_contenu;
}

void Case::setBateau(Bateau* bat) {
	this->bat = bat;
}