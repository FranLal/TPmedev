#include "bateau.h"

Bateau::Bateau(){
    nom="";
    length=0;
    x=0;
    y=0;
    horizontal=false;

}

Bateau::Bateau(string nom, int length,int x,int y,bool horizontal){
    this->nom=nom;
    this->length=length;
    this->x=x;
    this->y=y;
    this->horizontal=horizontal;
    this->vie=length;
}