#include<iostream>
#include<string>
#include<Windows.h>

struct Aluno{
    std::string nome;
    float nota1;
    float nota2;
};
float calcularMedia(Aluno a){
    return (a.nota1 + a.nota2) / 2;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Aluno aluno = {"Paulo", 8.0, 9.5};

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>aluno.nome;

    std::cout<<"Digite sua nota1: "<<std::endl;
    std::cin>>aluno.nota1;

    std::cout<<"Digita sua nota2: "<<std::endl;
    std::cin>>aluno.nota2;

    float media = calcularMedia(aluno);

    std::cout<<aluno.nome<<" - Média: "<<media<<std::endl;
    

    return 0;
}