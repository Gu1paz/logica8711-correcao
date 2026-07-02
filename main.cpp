#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;

    std::cout<<"==== Tamanho do vector ===="<<std::endl;
    std::cout<<std::endl;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);

    std::cout<<"Tamanho do vector: "<<numeros.size()<<std::endl;
    std::cout<<"Elementos: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    return 0;
}