#include<iostream>

int main(){

    int numeros[5] = {11, 23, 53, 11, 19};
    int contador = 0;

    for(int i = 0; i < 5; i++){
        if(numeros[i] == 11){
            contador++;
        }
    }

    std::cout<<"O numero 11 apareceu: "<<contador<<" vezes."<<std::endl;


    return 0;
}