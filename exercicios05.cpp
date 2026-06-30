#include<iostream>

int main(){

    int numeros[5];
    double soma = 0;

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o numero: "<<std::endl;
        std::cin>>numeros[i];
        soma += numeros[i];
    }

    std::cout<<"Media: "<<soma / 5<<std::endl;


    return 0;
}