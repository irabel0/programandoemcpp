#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

class Operacoes{

    public:
        void cadastro(string username, string password, string email, string level){
            cout << "Usuário cadastrado com sucesso!\n";
        }
        string login(string username, string password){
            return "Seja bem vindo!\n";
        }
        string trocarSenha(string username, string password){
            return "Senha alterada com sucesso!\n";
        }
        
};