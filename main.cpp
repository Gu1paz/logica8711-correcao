#include<iostream>
#include<string>
#include<Windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num1, num2, soma, subt, mult, op;
    float div;

    std::cout<<"Digite aqui o valor para número 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite aqui o valor para número 2: "<<std::endl;
    std::cin>>num2;

    std::cout<<"----- Escolha a operação -----"<<std::endl;
    std::cout<<"\n1 - Soma";
    std::cout<<"\n2 - Subtração";
    std::cout<<"\n3 - Multiplicação";
    std::cout<<"\n4 - Divisão";
    std::cout<<"\n";
    std::cin>>op;

    switch(op){
        case 1:
        soma = num1 + num2;
        std::cout<<"O resultado da soma é: "<<soma<<std::endl;
        break;
        case 2:
        subt = num1 - num2;
        std::cout<<"O resultado da subtração é: "<<subt<<std::endl;
        break;
        case 3:
        mult = num1 * num2;
        std::cout<<"O resultado da multplicação é: "<<mult<<std::endl;
        break;
        case 4:
        div = num1 / num2;
        std::cout<<"O resultado da divisão é: "<<div<<std::endl;
        break;
        default:
        std::cout<<"Você não digitou nenhuma valor válido!"<<std::endl;
    }
   

    return 0;
}