#include<iostream>
#include<string>
#include<Windows.h>

struct Pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Pessoa p1 = {"Guilherme", 22, 1.72};
    Pessoa p2 = {"Pedro Henrique", 20, 1.68};

    std::cout<<p1.nome<<" tem "<<p1.idade<<" anos"<<" e mede "<<p1.altura<<"m"<<std::endl;
    std::cout<<p2.nome<<" tem "<<p2.idade<<" anos"<<" e mede "<<p2.altura<<"m"<<std::endl;
   

    

    return 0;
}