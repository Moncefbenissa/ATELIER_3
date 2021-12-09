#include<iostream>
#include<string>
using namespace std;


//CREATION_DE_CLASSE:
class MyClass{
    public:
        MyClass();
        ~MyClass();    
};

    //CONSTRUCTEUR PAR DEFAULT:
    MyClass::MyClass(){ cout<< "\n CONSTRUCTEUR_PAR_DEFAULT";}

    //DESTRUCTEUR DEMANDE UN MSG POUR L'AFFICHER A LA FIN:
    MyClass::~MyClass()
        {   
            string MSG;
            cout<< "\n DESTRUCTEUR... \n";
            cin>>MSG;
            cout<<"\n "<<MSG<<"\n";
        }
int main(){

    //CREATION D'UN OBJET:
    MyClass class_1;
    return 0;
}