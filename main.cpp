#include<iostream>
#include<string>

int main(){

    std::string nomeCompleto;
    std::string email;
    std::string dataNascimento;
    int idade;
    int cpf;
    int rg;
    int curso;

    double valorCursoTds = 14405.49;
    double valorCursoTecEnf = 15278.00;
    double valorCursoTecMododelVest = 14844.79;
    
    float desconto = 0.10;
    float parcelasCartaoCredito = 0.06;

    std::cout<<"Digite o nome completo do aluno: "<<std::endl;
    std::getline(std::cin, nomeCompleto);

    std::cout<<"Qual é a sua idade: "<<std::endl;
    std::cin>>idade;

    std::cout<<"Digite seu RG: "<<std::endl;
    std::cin>>rg;

    std::cout<<"Digite seu CPF: "<<std::endl;
    std::cin>>cpf;

    std::cout<<"Digite sua data de nascimento: "<<std::endl;
    std::cin>>dataNascimento;

    std::cout<<"Digite seu email: "<<std::endl;
    std::cin>>email;


    std::cout<<"Por favor, escolha um curso: "<<std::endl;
    std::cout<<"1 - TI"<<std::endl;
    std::cout<<"2 - Saúde"<<std::endl;
    std::cout<<"3 - Moda"<<std::endl;
    std::cin>>curso;

    switch(curso){
    case 1:
        std::cout<<"TI";
        break;
    case 2:
        std::cout<<"Saúde";
        break;
    case 3:
        std::cout<<"Moda";
        break;
    default:
        std::cout<<"Número inválido"<<std::endl;    
    }



    return 0;
}