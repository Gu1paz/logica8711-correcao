#include<iostream>
#include<cmath>
#include<Windows.h>

int CalcularCubo(int num){
    return static_cast<int>(std::pow(num, 3));
}
int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a;

    std::cout<<"Digite um número interiro: "<<std::endl;
    std::cin>>a;

    int cubo = CalcularCubo(a);

    std::cout<<"O cubo de "<<a<<" é: "<<cubo<<std::endl;
    
    return 0;
}