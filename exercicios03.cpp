#include<iostream>

int main(){

    int numeros[5];
    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o numero: "<<std::endl;
        std::cin>>numeros[i];
    }

    int maior = numeros[0];
    for(int i = 1; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    } 

    std::cout<<"Maior numero: "<<maior<<std::endl;

    return 0;
}