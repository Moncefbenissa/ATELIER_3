#include<iostream>
#include<string>
using namespace std;

//Définition de la classe "shape":
class shape{
    public:
        int hauteur;
        int largeur;
        shape(int h,int l){
            this->hauteur=h;
            this->largeur=l;
        }
};

//Définition d'une classe triangle (Sous classe de shape):
class triangle: public shape{
    public:

        /* Puisqu'on a pas de nouvel attribut on peut demander l'héritage de constructeur en utilisant le mot clé "using"*/
       using shape::shape;
       void area(){cout<<"\n L'aire de la zone est: "<< (hauteur*largeur)/2;}
};

//Définition d'une classe rectangle (Sous classe de shape):
class rectangle: public shape{
    public:
       using shape::shape;
       void area(){cout<<"\n L'aire de la zone est: "<< hauteur*largeur;}
};

int main(){

    //Définition d'un rectangle et un triangle:
    rectangle rectangle_1(10,5);
    triangle triangle_1(10,5);

    //L'appel de la fonction area();
    rectangle_1.area();
    triangle_1.area();   
    return 0;
}