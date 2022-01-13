#include "joueur.h"
#include "constante.h"

Joueur::Joueur() {
    nom = "";
    pv = 0;
    grille_bateaux = nullptr;
    grille_tir = nullptr;
}
Joueur::Joueur(string _nom, Grille* _grille_bateaux, Grille* _grille_tir) {
    nom = _nom;
    pv = NB_BATEAUX;
    grille_bateaux = _grille_bateaux;
    grille_tir = _grille_tir;
}