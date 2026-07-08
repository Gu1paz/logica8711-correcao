#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> numeros;

    std::cout<<"Mostrar pares"<<std::endl;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    numeros.push_back(20);
    numeros.push_back(25);

    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] % 2 == 0){
            std::cout<<numeros[i]<<std::endl;
        }
    }
    std::cout<<std::endl;
    
    return 0;
}