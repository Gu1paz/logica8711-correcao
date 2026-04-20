#include <iostream>
#include<string>

int main(){

    int numeros[3];
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;

    for(int i = 0; i < 3; i++){
        std::cout<<numeros[i]<<std::endl;
    }


    return 0;
}