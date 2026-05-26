#include<iostream>
#include<format>
#include<string>
#include<Windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Guilherme";

    std::string mensagem = std::format("Olá, {}! Você tem {} anos.\n", nome);
    std>>cout<<mensagem;

    return 0;
}