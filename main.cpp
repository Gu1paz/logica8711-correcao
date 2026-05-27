#include<iostream>
#include<tuple>
#include<string>
#include<Windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::tuple<int, std::string, double> aluno(1, "guilherme", 9.5);

    std::cout<<"ID: "<<std::get<0>(aluno)<<"\n";
    std::cout<<"Nome: "<<std::get<1>(aluno)<<"\n";
    std::cout<<"Nota: "<<std::get<2>(aluno)<<"\n";

    
    return 0;
}