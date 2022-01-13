#include "joueur.h"
#include "constante.h"

Joueur::Joueur() {
    nom = "";
    pv = 0;
    grille_bateaux = NULL;
    grille_tir = NULL;
}
Joueur::Joueur(string _nom, Grille* _grille_bateaux, Grille* _grille_tir) {
    nom = _nom;
    pv = NB_BATEAUX;
    grille_bateaux = _grille_bateaux;
    grille_tir = _grille_tir;
}

void Joueur::setBateaux(Bateau** _liste_bateaux) {
    for (int i = 0; i < NB_BATEAUX; i++) {
        liste_bateaux[i] = _liste_bateaux[i];
    }
}