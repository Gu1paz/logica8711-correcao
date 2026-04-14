#include<iostream>
#include<string>

int main(){

    std::string nome;
    float altura;
    int idade;

    std::cout<<"Qual é o seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual sua altura: "<<std::endl;
    std::cin>>altura;

    std::cout<<"Qual sua idade: "<<std::endl;
    std::cin>>idade;

    std::cout<<"Bem vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"Sua é altura: "<<altura<<std::endl;
    std::cout<<"Sua é idade: "<<idade<<std::endl;

    if(idade <= 10){
        std::cout<<"Você é uma criança"<<std::endl;
    }else if(idade <=18){
        std::cout<<"Você é um(a) adolescente"<<std::endl;
    }else if(idade <= 60){
        std::cout<<"Você é um(a) adulto(a)"<<std::endl;
    }else{
        std::cout<<"Seu velho!!!"<<std::endl;
    }


    return 0;
}