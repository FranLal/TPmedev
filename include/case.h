#ifndef CASE_H
#define CASE_H

#include "bateau.h"

class Case {
private:
	// coordonnées de la Case, l'origine est en bas à gauche et commence à 1
	int x; //horizontalement
	int y; //verticalement
	int contenu; // contenu de la Case, se référencer aux constantes de constante.h
	bool decouverte; //pour la grille adverse : true si on a torpillé à cet endroit
	Bateau* bat;
	
public:
	//lecture
	int getX()		{ return this->x; }
	int getY() { return this->y; }
	int getContenu() { return this->contenu; }
	bool getDecouverte() { return this->decouverte; }
    Bateau* getBateau() {return this->bat;}
	//ecriture
	void setContenu(int nouveau_contenu);
    void setBateau(Bateau* bat);
	void setDecouverte(bool isDecouvert) {decouverte=isDecouvert;}
    Case(int x, int y, int contenu);
};

#endif
