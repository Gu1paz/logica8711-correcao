#include<iostream>
#include<string>
#include<thread> //para lidar com o tempo de execução
#include<chrono> //para definir unidades de tempo (ms, segundos)

int main(){

    int tabuada = 7;

    for(int i = 0; i <=10; i++){
        std::cout<<"O resultado de "<<tabuada<<" x "<<i<<" = "<<tabuada * i<<std::endl;
    }


    return 0;
}