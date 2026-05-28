#include<iostream>
#include<tuple>
#include<string>
#include<Windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;
    int idade;
    double altura;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::getline(std::cin, nome);

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    std::cout<<"Digite a sua altura: "<<std::endl;
    std::cin>>altura;

    std::tuple<std::string, int, double> pessoa = std::make_tuple(nome, idade, altura);
    
    std::cout<<"\n ----- Dados Salvos na Tupla -----"<<std::endl;

    std::cout<<"Nome: "<<std::get<0>(pessoa)<<std::endl;
    std::cout<<"Idade: "<<std::get<1>(pessoa)<<" anos."<<std::endl;
    std::cout<<"Altura: "<<std::get<2>(pessoa)<<"cm"<<std::endl;

    return 0;
}