#pragma once

#include "joueur.h"

class Utilisateur : public Joueur {
public:
    Utilisateur() : Joueur() {}
    Utilisateur(string _nom, Grille* _grille_bateaux, Grille* _grille_tir) : Joueur(_nom, _grille_bateaux, _grille_tir) {}

    void attack();
};