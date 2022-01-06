#pragma once 

#include <string>

using namespace std;

class Bateau{
private: 
    string nom;
    int length;
    int x;
    int y;
    bool horizontal;
    int vie;
public:
    Bateau();
    Bateau(string nom, int length,int x,int y,bool horizontal);
    string getNom() {return nom;}
    int getLength() {return length;}
    int getX() {return x;}
    int getY() {return y;}
    bool isHorizontal() {return horizontal;}
    int getVie() {return vie;}
    void setNom(string _nom) {nom=_nom;};
    void setLength(int _length) {length=_length;}
    void setX(int _x) {x=_x;}
    void setY(int _y) {y=_y;}
    void setHorizontal(bool _horizontal) {horizontal=_horizontal;}
    void setVie(int _vie) {vie=_vie;}



};

