#include "joueur.h"
#include "constante.h"
#include <GL/glut.h>
#include <GL/glu.h>

Joueur::Joueur() {
    nom = "";
    pv = 0;
    grille_bateaux = new Grille;
    grille_tir = NULL;
}

Joueur::Joueur(string _nom, Grille* _grille_bateaux, Grille* _grille_tir) {
    nom = _nom;
    pv = NB_BATEAUX;
    grille_bateaux = _grille_bateaux;
    grille_tir = _grille_tir;
}

void Joueur::setBateaux(Bateau* _liste_bateaux) {
    for (int i = 0; i < NB_BATEAUX; i++) {
        liste_bateaux[i] = _liste_bateaux[i];
    }
}


void Joueur::display_board(){
    //display_grid(w/h, position_x, scale)

    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    std::cout<<"grille bateaux"<<std::endl;
    this->grille_bateaux->display_grid(0.5,-0.5,0.9);
    std::cout<<"grille tir"<<std::endl;
    this->grille_tir->display_grid(0.5,0.5,0.7);
}