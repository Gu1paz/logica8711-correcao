#include<iostream>

int main(){

    int numeros[5] = {1,2,3,4,5};

    for(int i = 4; i >= 0; i--){
        std::cout<<numeros[i];
    }



    return 0;
}