#include<iostream>

int main(){

    int numeros[10];
    int contador = 0;

    for(int i = 0; i < 10; i++){
        std::cout<<"Digite o numero: "<<std::endl;
        std::cin>>numeros[i];
        contador ++;
        }

    std::cout<<"O array tem: "<<contador<<" elementos."<<std::endl;


    return 0;
}