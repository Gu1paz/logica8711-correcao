#include<iostream>
#include<string>
#include<cctype>
#include<Windows.h>



int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero = 42;
    int* ptr = &numero;

    std::cout<<"Acessar via variável: "<<numero<<std::endl;
    std::cout<<"Acessar via ponteiro: "<<*ptr<<std::endl;


    return 0;
}