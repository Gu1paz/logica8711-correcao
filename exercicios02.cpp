#include<iostream>

int main(){

    int numeros[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o numero: "<<(i + 1)<<std::endl;
        std::cin>>numeros[i];
        soma += numeros[i];
    }

    std::cout<<"A soma total é: "<<soma<<std::endl;


    return 0;
}