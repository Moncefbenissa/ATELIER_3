#include <iostream>
#include <string>
using namespace std;

//Création d'une classe mère Animal:
class Animal{
public:
	const char* nom;
	int age;
	Animal(const char* A_nom) : nom(A_nom){};
	void set_value(int A_age){age = A_age;};	
};

//Création de sous-classe Zebra:
class Zebra : public Animal{
public:
	const char* origine;
	Zebra (const char* A_nom, const char* A_origine) : Animal (A_nom), origine (A_origine){};
	void affichage(){cout << "\nLE NOM: "<< nom << "\nL'AGE: " << age << "\nLIEU D'ORIGINE:  "<< origine;};
};

//Création de sous-classe Dolphin:
class Dolphin : public Animal{
public:
	const char* origine;
	Dolphin (const char* A_nom, const char* A_origine) : Animal (A_nom), origine (A_origine){};
	void affichage(){cout << "\nLE NOM: "<< nom << "\nL'AGE: " << age << "\nLIEU D'ORIGINE:  "<< origine;};
};
int main()
{	
    Zebra zebra_1("nom_zebra_1","origine_zebra_1");
    zebra_1.set_value(30);
    zebra_1.affichage();

    cout<<"\n**************************";

    Dolphin dolphin_1("nom_dolphin_1","origine_dolphin_1 \n");
    dolphin_1.set_value(25);
    dolphin_1.affichage();

	return 0;
}