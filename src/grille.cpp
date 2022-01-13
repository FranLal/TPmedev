#include "constante.h"
#include "grille.h"
#include "case.h"
#include "bateau.h"


Grille::Grille(){
    for(int i=0;i<TAILLE_GRILLE;i++){
        for(int j=0;j<TAILLE_GRILLE;j++){
            //ajout d'une case "mer" à chaque case
            this->grille[i][j] = new Case(i,j,MER);
        }
    }
}

void Grille::display_grid() {

}

void Grille::add_boat(Bateau* bat) {
	this->grille[bat->getX()][bat->getY()]->setBateau(bat);
}