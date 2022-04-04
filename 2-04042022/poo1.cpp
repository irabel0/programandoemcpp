//Programa para trabalhar com orientação ao objeto usando classe e objetos 

#include <iostream>

//Chamada da biblioteca std

using std::cout;
using std::cin;

class textos{

    public:
        void mensagem1(){
            cout << "Olá, ";
        }
        void mensagem2(){
            cout << "bom dia!";
        }

};

int main(){
    
    textos txt;
    txt.mensagem1();
    txt.mensagem2();
    cout << "\n";

    return 0;
}