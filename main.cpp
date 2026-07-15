#include<iostream>
#include<cmath>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    std::cout<<"Digite um numero: "<<std::endl;
    std::cin>>numero;

    std::cout<<"tabuada do numero digitado: "<<std::endl;
    for(int i = 1; i <= 10; i++){
        int resultado = numero * i;
        std::cout<<numero<<" x "<<i<<" = "<<resultado<<std::endl;
    }

    return 0;
}