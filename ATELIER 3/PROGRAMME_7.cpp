#include <iostream>
#include <string>
using namespace std;

class vecteur3d {
	float x,y,z;
	public:
    //Un constructeur, avec des valeurs par défaut (0),
	vecteur3d(float a = 0, float b = 0, float c = 0) : x(a), y(b), z(c) {}
	
	//Une fonction d’affichage des 3 composantes du vecteur, sous la forme : (x, y, z)
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;
	}
	
	//une fonction permettant d’obtenir la somme de 2 vecteurs:
	vecteur3d somme(const vecteur3d & vecteur) {
		vecteur3d somme;
		somme.x = x + vecteur.x;
		somme.y = y + vecteur.y;
		somme.z = z + vecteur.z;
		return somme;
	}
	
	//Une fonction permettant d’obtenir le produit scalaire de 2 vecteurs:
	float produit(const vecteur3d & vecteur) {
		return x*vecteur.x + y*vecteur.y + z*vecteur.z;
	}
	
	//une fonction coincide permettant de savoir si 2 vecteurs ont mêmes composantes;
	bool coincide(const vecteur3d & vecteur) {
		return (x == vecteur.x && y == vecteur.y && z == vecteur.z);
	}
	
	//Une fonction qui renvoie la norme du vecteur:
	float norme() {
		return x*x + y*y + z*z;
	}
	
	/*une fonction nommée normax permettant d’obtenir, parmi deux vecteurs, celui qui a la plus grande norme "PAR VALEUR"*/
	vecteur3d normax(vecteur3d vecteur) {
		if( this->norme() > vecteur.norme())
		    return *this;
		    
		return vecteur;
	}
	/*une fonction nommée normax permettant d’obtenir, parmi deux vecteurs, celui qui a la plus grande norme "PAR ADRESSE"*/
	vecteur3d * normax(vecteur3d * vecteur) {
		if( this->norme() > vecteur->norme())
		    return this;
		    
		return vecteur;
	}
	
	/*une fonction nommée normax permettant d’obtenir, parmi deux vecteurs, celui qui a la plus grande norme "PAR REFERENCE"*/
	vecteur3d & normaxR(vecteur3d &vecteur) {
		if( this->norme() > vecteur.norme())
		    return *this;
		return vecteur;
	}

};
int main(){
    
//DECLARATION DE DEUX VECTEURS V1 ET V2:
    vecteur3d v1(1,2,3);
    vecteur3d v2(5,6,7);

//AFFICHAGE DE V1 ET V2:
	cout << "Vecteur V1";
	v1.afficher();
	cout << "Vecteur V2";
	v2.afficher();

//AFFICHAGE DE LA SOMME DE V1 ET V2:
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();

//AFFICHAGE DE PRODUIT DE V1 ET V2:
	cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2)<<"\n";

//LES DEUX VECTEURS ONT LES MEMES COMPOSANTES OU PAS:
	if(v1.coincide(v2))
	    cout << "Les vecteurs v1 et v2 coincident "; 
	else
	    cout << "Les vecteurs v1 et v2 ne coincident pas ";
	
//LA FONCTION NORMAX:
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).afficher();
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->afficher();
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	(v1.normaxR(v2)).afficher();

    return 0;
}