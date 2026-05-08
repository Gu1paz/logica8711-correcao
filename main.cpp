#include<iostream>
#include<string>
#include<limits>
#include<Windows.h>

void pagamento(int pag, int val){
    std::cout<<"Tipo de pagamento: "<<std::endl;
    std::cin>>pag;
    std::cout<<
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //variaveis de cadastro
    std::string nomeCompleto, email, dataNascimento, cpf;
    int idade, curso, opcaoPagamento;
    
    //variaveis de curso
    double valorCursoTds = 14405.49;
    double valorCursoTecEnf = 15278.00;
    double valorCursoTecModelVest = 14844.79;
    double valorCursoRh = 3350.00;
    double valorCursoLogistica = 3751.00;
    double valorCursoContabilidade = 3355.00;    
    double valorCursoTecCostura = 1989.36;
    double valorCursoPowerBi = 654.96;
    double valorCursoExcel = 1803.12;
    
    float desconto = 0.10;
    float parcelas = 0.06;

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

    std::cout<<"\n----- Cadastro Realizado -----"<<std::endl;
    std::cout<<"Aluno: "<<nomeCompleto<<" cpf: "<<cpf<<std::endl;

    //opções de cursos(concluido)
    std::cout<<"\nPor favor, escolha uma modalidade: "<<std::endl;
    std::cout<<"1 - Cursos Presenciais"<<std::endl;
    std::cout<<"2 - Cursos EAD"<<std::endl;
    std::cout<<"3 - Cursos Livres"<<std::endl;
    std::cin>>curso;

    switch(curso){
    case 1:
        int escolhaQualquerUm;
        std::cout<<"\nNos cursos presenciais, nós temos:"<<std::endl;
        std::cout<<"1 - Técnico em Desenvolvimento de Sistemas (R$ "<<valorCursoTds<<")"<<std::endl;
        std::cout<<"\n2 - Técnico de Enfermagem (R$ "<<valorCursoTecEnf<<")"<<std::endl; 
        std::cout<<"\n3 - Tecnico em Modelagem do Vestuario (R$ "<<valorCursoTecModelVest<<")"<<std::endl;

        std::cout<<"\n";

        std::cout<<"escolha o curso desejado: "<<std::endl;
        std::cin>>escolhaQualquerUm;
        break;
    case 2:
        int escolhaQualquerUm;
        std::cout<<"\nNos cursos EADs, nós temos:"<<std::endl;
        std::cout<<"1 - RH (R$ "<<valorCursoRh<<")"<<std::endl;
        std::cout<<"\n2 - Logística (R$"<<valorCursoLogistica<<")"<<std::endl;
        std::cout<<"\n3 - Contabilidade (R$ "<<valorCursoContabilidade<<")"<<std::endl;

        std::cout<<"\n";

        std::cout<<"escolha o curso desejado: "<<std::endl;
        std::cin>>escolhaQualquerUm;
        break;
    case 3:
        int escolhaQualquerUm;
        std::cout<<"\nNos cursos livres, nós temos:"<<std::endl;
        std::cout<<"1 - Técnica de costura (R$ "<<valorCursoTecCostura<<")"<<std::endl;
        std::cout<<"\n2 - Power BI (R$ "<<valorCursoPowerBi<<")"<<std::endl;
        std::cout<<"\n3 - Excel (R$ "<<valorCursoExcel<<")"<<std::endl;

        std::cout<<"\n";

        std::cout<<"escolha o curso desejado: "<<std::endl;
        std::cin>>escolhaQualquerUm;
        break;
    default:
        std::cout<<"Número inválido"<<std::endl;    
    }


    
    pagamento();

    return 0;
}