#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;

    std::cout<<"==== VECTOR (Arraylist em C++) ===="<<std::endl;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    std::cout<<"Números: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Tamanho: "<<numeros.size()<<std::endl;

    numeros.pop_back();

    std::cout<<"Após remover o último: ";
    for(int i = 0; i <numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }

    return 0;
}