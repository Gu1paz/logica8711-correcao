#include<iostream>
#include<cmath>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"Números impares de 1 até 20: "<<std::endl;

    for(int i = 1; i <= 20; i+=2){
        std::cout<<i<<" "<<std::endl;
    }

    
    return 0;
}