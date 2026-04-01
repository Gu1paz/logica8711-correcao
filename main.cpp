#include<iostream>
#include<string>

int main(){

    std::string nome;
    int idade;
    int anoAtual = 2026;

    std::cout<<"Qual seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual sua idade: "<<std::endl;
    std::cin>>idade;

    int anoNascido = 2026 - idade;
    
    std::cout<<"Bem vindo(a) "<<nome<<std::endl;
    std::cout<<"Você nasceu no ano de: "<<anoNascido<<std::endl;



     return 0;

}