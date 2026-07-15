#include<iostream>
#include<cmath>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"somar todos os numeros de 1 até 100: "<<std::endl;

    int soma = 0;

    for(int i = 1; i <= 100; i++){
        soma += i;
    }
    std::cout<<soma;
    return 0;
}