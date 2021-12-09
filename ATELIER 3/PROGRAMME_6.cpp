#include <iostream>
#include <string>
using namespace std;

class Personne{
    private:
        string nom;
        string prenom;
        string date_de_naissance;

    public:
    Personne(string n, string p, string d):nom(n),prenom(p),date_de_naissance(d){}
    void Afficher(){
        cout<<"\nLE NOM EST: "<<nom;
        cout<<"\nLE PRENOM EST: "<<prenom;
        cout<<"\nLA DATE DE NAISSANCE EST: " << date_de_naissance;
    }
};
class Employe:public Personne{
    public:
    float salaire;
    Employe(string n, string p, string d,float s):Personne(n,p,d){salaire=s;}
     void Afficher(){
        Personne::Afficher();
        cout<<"\nLE SALAIRE EST: "<<salaire;}
};
class Chef: public Employe{
    public:
    string service;
    Chef(string n, string p, string d,float s,string se):Employe(n,p,d,s){service=se;}
    void Afficher(){
        Employe::Afficher();
        cout<<"\nLE SERVICE EST: "<<service;}

};
class Directeur : public Chef{
    public:
    string societe;
    Directeur(string n, string p, string d,float s,string se,string so):Chef(n,p,d,s,se){societe=so;}
    void Afficher(){
        Chef::Afficher();
        cout<<"\nLA SOCIÉTÉ EST: "<<societe;}
};

int main(){


    Personne PERS("TOUZANI","MOHAMMED","11/11/1998");
    PERS.Afficher();
    cout<<"\n**************\n";


    Employe EMP("RACHIDI","RACHID","27/12/1929",2586.525);
    EMP.Afficher();
    cout<<"\n**************\n";


    Chef CHEF("BENCHRIF_TOUZANI_LAALAOUI","BACHIR","01/01/1901",7500,"DIRECTEUR");
    CHEF.Afficher();
    cout<<"\n**************\n";


    Directeur DIR("BENISSA","MONCEF","27/06/2001",75000,"PROGRAMMER","GOOGLE");
    DIR.Afficher();
    cout<<"\n**************\n";

    return 0;
}