#include<iostream>
#include<string>
#include<Windows.h>

struct Aposta{
    std::string time;
    double valor;
    double odd;
};

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"==== CALCULADORA DE APOSTAS ===="<<std::endl;
    std::cout<<std::endl;

    Aposta aposta;

    std::cout<<"Time: ";
    std::cin>>aposta.time;

    std::cout<<"Valor da aposta (R$): ";
    std::cin>>aposta.valor;

    std::cout<<"Odd (multiplicador): ";
    std::cin>>aposta.odd;

    double ganho = aposta.valor * aposta.odd;
    double lucro = ganho - aposta.valor;

    std::cout<<std::endl;
    std::cout<<"==== RESULTADO ===="<<std::endl;
    std::cout<<"Você apostou R$ "<<aposta.valor<<" em "<<aposta.time<<std::endl;
    std::cout<<"Se acertar, você ganha: R$ "<<ganho<<std::endl;
    std::cout<<"Lucro: R$ "<<lucro<<std::endl;

    return 0;
}