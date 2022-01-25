#pragma once
#include <map>
using namespace std;

// DESCRIPTION DE L'ETAT DES CASES
// [Case de sa propre grille]
#define MER 1
#define BATEAU 2
#define BATEAU_TOUCHE 3
#define DANS_LEAU 4
// [Nombre de bateaux dans la partie]
#define NB_BATEAUX 5
#define TAILLE_GRILLE 10


// DESCRIPTION DES BATEAUX
const int TAILLES_DES_BATEAUX[NB_BATEAUX] = {5, 4, 3, 3, 2};
const string NOMS_DES_BATEAUX[NB_BATEAUX] = {"Porte-avion", "Croiseur", "Contre-torpilleur", "Sous-marin", "Torpilleur"};
const map<char, int> CORRESPONDANCE_LETTRES_CHIFFRE = { pair<char,int>('A', 0),
                                                        pair<char,int>('B', 1),
                                                        pair<char,int>('C', 2),
                                                        pair<char,int>('D', 3),
                                                        pair<char,int>('E', 4),
                                                        pair<char,int>('F', 5),
                                                        pair<char,int>('G', 6),
                                                        pair<char,int>('H', 7),
                                                        pair<char,int>('I', 8),
                                                        pair<char,int>('J', 9)};