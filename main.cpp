#include<iostream>
#include<cmath>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const double pi = 3.14;
    int raio;

    std::cout<<"Digite o raio do circulo: ";
    std::cin>>raio;

    double area = pi * raio * raio;

    std::cout<<"O valor da area do circulo é: "<<area<<std::endl;

    
    return 0;
}