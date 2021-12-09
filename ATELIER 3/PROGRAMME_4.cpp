#include<iostream>
#include<string>
using namespace std;

//Définition d'une classe mère:
class mere{
    public:
    void display(){
        cout<<"\nLE MESSAGE DE LA CLASSE MERE \n";
    }
};

//Définition d'une classe fille héritée:
class fille : public mere{
    public:
    void display(){
        cout<<"\nLE MESSAGE DE LA CLASSE FILLE\n";
    }
};

int main(){
    fille fille_1; 
    fille_1.display();//La méthode display() de la classe "fille".
    mere  mere_1; 
    mere_1.display(); //La méthode display() de la classe "mere".
 return 0;
}