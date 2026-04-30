#include<iostream>
#include<string>

int main(){

    int opcao;
    std::string nome;
    int idade;

    std::cout<<"----- Escolha a opção adequada: "<<std::endl;
    std::cout<<"Digite 1 para cadastrar ou 2 para sair: "<<std::endl;
    std::cin>>opcao;

    if(opcao == 1){
        std::cout<<"Digite o nome: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite a idade: "<<std::endl;
        std::cin>>idade;

        std::cout<<"Seu nome é: "<<nome<<std::endl;
        std::cout<<"Sua idade é: "<<idade<<std::endl;
    }else{
        std::cout<<"Até a próxima!"<<std::endl;
    }


    return 0;
}