#include <iostream>
using namespace std;
class Media
{
public:
    Media() {}; 
    string titre;
    virtual void imprime()  { 
        cout << "LA FONCTION IMPRIMER \n";
    };
    char* id(char a); 
};
class Livre : public Media 
{
public:
    Livre() {};
    string LIVRE;
};
class audio : public Livre  
{
public:
    audio() {};
    string AUDIO;
};
class cd : public audio 
{
public:
    cd() {};
    string CD;
};
class casette : public audio
{
public:
    casette() {};
    string CASSETE;
};
class disque : public audio
{
public:
    disque() {};
    string DISQUE;
};
class presse : public Media 
{
public:
    presse() {};
    string PRESSE;
};
class magazine : public presse 
{
public:
    magazine() {};
    string MAGAZINE;
};
class journal : public presse
{
public:
    journal() {};
    string JOURNAL;
};
class revue : public presse
{
public:
    revue() {}; 
    string REVUE; 
};
int main()
{
    disque disque; disque.imprime();
    Livre Livre; Livre.imprime(); 
    magazine magazine; magazine.imprime();
    cd cd; cd.imprime();
    casette casette; casette.imprime(); 
    revue revue; revue.imprime();
    return 0;
}
