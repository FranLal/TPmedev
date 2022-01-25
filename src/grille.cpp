#include "constante.h"
#include <GL/glut.h>
#include <GL/glu.h>
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

void Grille::display_grid(float r_x,float t_x,float scale){

    glTranslatef(t_x,0.,0.);
    glScalef(r_x*scale,scale,1);


    //notre grille
    glColor3f(0.0f,1.0f,0.0f);
    vector<char> letters = {'a','b','c','d','e','f','g','h','i','j'};
    vector<char> numbers = {'1','2','3','4','5','6','7','8','9','0'};

    float x_coord;
    float y_coord;

    for(int i=0;i<11;i++){
        x_coord = (i*0.2-1.);
        y_coord = -(i*0.2-1.);
        if(i<10){
            //Afficher les chiffres et lettres
            glRasterPos2f(x_coord, 1);
            glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18, letters[i]);
            glRasterPos2f(-1,y_coord);
            glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18, numbers[i]);

            for(int j =0;j<10;j++){
                //afficher le contenu de la case
                switch(this->grille[i][j]->getContenu()){
                case  MER :
                    glColor3f(0.12f,0.53f,0.89f);
                    break;
                case BATEAU :
                    glColor3f(0.5f,0.5f,0.5f);
                    break;
                case BATEAU_TOUCHE :
                    glColor3f(0.57f,0.0f,0.0f);
                    break;
                case DANS_LEAU :
                    glColor3f(0.27f,0.68f,0.99f);
                    break;
                }
                glTranslatef(-0.9+j*0.2,0.9-i*0.2,0);
                glScalef(0.09,0.09,1.0);
                glBegin(GL_QUADS);
                    glVertex2d(-1,-1);
                    glVertex2d(1,-1);
                    glVertex2d(1,1);
                    glVertex2d(-1,1);
                glEnd();
                glScalef(1/0.09,1/0.09,1.0);
                glTranslatef(0.9-j*0.2,-0.9+i*0.2,0);
            }
        }

        glColor3f(0.0f,1.0f,0.0f);
        //afficher les lignes verticales
        glBegin(GL_LINES);
            glVertex2d(x_coord,-1);
            glVertex2d(x_coord,1);
        glEnd();
        //afficher les lignes horizontales
        glBegin(GL_LINES);
            glVertex2d(-1,y_coord);
            glVertex2d(1,y_coord);
        glEnd();
    }

    glFlush();
}

void Grille::add_boat(Bateau* bat) {
	this->grille[bat->getX()][bat->getY()]->setBateau(bat);
}