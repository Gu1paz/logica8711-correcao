#include<iostream>
#include<string>

int main(){

    std::string nome;
    int idade;
    float altura;

    std::cout<<"Qual seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"qual sua idade "<<std::endl;
    std::cin>>idade;

    std::cout<<"qual sua altura "<<std::endl;
    std::cin>>altura;
    
    std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"qual sua idade? "<<idade<<std::endl;
    std::cout<<"qual sua altura? "<<altura<<std::endl;

    std::cout<<"teste";

    return 0;
}