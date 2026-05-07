#include<iostream>
#include<string>
#include<limits>

int main(){

    std::string nomeCompleto, email, dataNascimento, cpf;

    int idade, curso;

    double valorCursoTds = 14405.49;
    double valorCursoTecEnf = 15278.00;
    double valorCursoTecMododelVest = 14844.79;
    
    float desconto = 0.10;
    float parcelasCartaoCredito = 0.06;

    //informações cadastrais(concluido)
    std::cout<<"----- Realize o seu cadastro -----"<<std::endl;

    std::cout<<"Digite o nome completo do aluno: "<<std::endl;
    std::getline(std::cin, nomeCompleto);

    std::cout<<"Qual é a sua idade: "<<std::endl;
    std::cin>>idade;

    std::cout<<"Digite seu CPF: "<<std::endl;
    std::cin>>cpf;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Digite sua data de nascimento: "<<std::endl;
    std::getline(std::cin, dataNascimento);

    std::cout<<"Digite seu email: "<<std::endl;
    std::getline(std::cin, email);

    std::cout<<"----- Cadastro Realizado -----"<<std::endl;
    std::cout<<"Aluno: "<<nomeCompleto<<" cpf: "<<cpf<<std::endl;

    //opções de cursos(inacabado)
    std::cout<<"Por favor, escolha uma modalidade: "<<std::endl;
    std::cout<<"1 - Cursos Presenciais"<<std::endl;
    std::cout<<"2 - Cursos EAD"<<std::endl;
    std::cout<<"3 - Cursos Livres"<<std::endl;
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