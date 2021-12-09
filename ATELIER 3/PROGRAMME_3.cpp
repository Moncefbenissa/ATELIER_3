#include<iostream>
#include<string>
using namespace std;

class operation{
    public:
        int re1,re2;
        int im1,im2;
        int choix;
        //Initialisation des attributs:
        operation(){
            cout<< "LE PREMIER NOMBRE COMPLEXE ...\n";
            cout<< "ENTRER LA PARTIE REELLE: \n"; cin>> re1;
            cout<< "ENTRER LA PARTIE IMAGINAIRE: \n"; cin>> im1;

            cout<<"*******************************\n";
            cout<< "LE DEUXIEME NOMBRE COMPLEXE ...\n";
            cout<< "ENTRER LA PARTIE REELLE: \n"; cin>> re2;
            cout<< "ENTRER LA PARTIE IMAGINAIRE: \n"; cin>> im2;

            cout<<"*******************************\n";
            cout<< "CHOIX D'OPERATION: ...\n";
            cout<< "1- ADDITION: \n"
                << "2- SOUSTRACTION: \n"
                << "3- MULTIPLICATION: \n"; cin >> choix;
            
                calcule(choix);
        }

    void calcule(int choix){

        switch (choix)
            {

            case 1:
                cout<<"\n ("<< re1 <<" + i "<<im1<<" )"<<" + "
                <<"("<< re2 <<" + i "<<im2<<" )"<< " = "
                <<"("<< re1 + re2 <<" + i "<< im1+im2 <<" )";
                break;
            case 2:
                cout<<"\n ("<< re1 <<" + i "<<im1<<" )"<<" - "
                <<"("<< re2 <<" + i "<<im2<<" )"<< " = "
                <<"("<< re1 - re2 <<" + i "<< im1 - im2 <<" )";
                break;

            //POUR CALCULER LA MULTIPLICATION : (a + bi)(c + di) = (ac − bd) + (ad + bc)i
            case 3:
                cout<<"\n ("<< re1 <<" + i "<<im1<<" )"<<" * "
                <<"("<< re2 <<" + i "<<im2<<" )"<< " = "
                <<"("<< re1 * re2 - im1 * im2 <<" + i "<< re1 * im2 + re2 * im1 <<" )";
                break;
            }
    }
};

int main(){
operation _operation_1;
    return 0;
}