#include <iostream>
#include <string>
#include <thread> //para lidar com o tempo de execução
#include <chrono> //para definir unidades de tempo (ms, segundos)

int main(){

    for(int i = 1; i <= 2; ++i){
        std::cout<<"Externo:: "<<i<<std::endl;

        for(int j = 1; j <= 3; ++j){
            std::cout<<"Interno: "<<j<<std::endl;
        }
    }
    return 0;
}