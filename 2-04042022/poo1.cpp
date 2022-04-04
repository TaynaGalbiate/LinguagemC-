//Programa para trabalhar com orientação a objeto, usando classe e objeto

#include <iostream>
using std::cout;
using std::cin;

class Textos{
    public:
    void mensagem1(){
        cout << "\nOlá!\n";
    }
    void mensagem2(){
        cout << "\nBom dia!\n";
    
    }
};

int main (){
    Textos txt;
    txt.mensagem1();
    txt.mensagem2();

    return 0;
}