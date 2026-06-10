#include<iostream>
#include<string>
#include<Windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade = 38;
    
    std::string resultado = (idade >= 18) ? "Maior de idade!" : "Menor de idade";

    std::cout<<resultado<<std::endl;

    return 0;
}