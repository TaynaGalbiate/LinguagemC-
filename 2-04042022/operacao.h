#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

class Operacoes{
    public:
        void cadastro(string nome, string senha, string email,string nivel){               //Void não retorna
        cout<< "Cadastro de usuário realizado\n";
        }
        string login(string nome, string senha){
            return "\nSeja Bem-Vundo\n";
        }
        string trocarSenha(string nome, string senha){
            return "\nSenha alterada\n";
        }
};