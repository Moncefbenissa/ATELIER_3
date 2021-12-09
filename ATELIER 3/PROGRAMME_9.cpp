#include <iostream>
#include <string>
using namespace std;

class Test{
    public:
    static int COMPTEUR;
    void call(){
        COMPTEUR++;
    }
};
int Test::COMPTEUR = 0;
int main(){
    Test test1,test2,test3,test4;

    test1.call();
    test2.call();
    test3.call();
    test4.call();

    cout << "La fonction « call » a été appelée " << Test::COMPTEUR << " fois";
    return 0;
}