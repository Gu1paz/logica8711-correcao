#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;

    std::cout<<"==== Acessar elemento ===="<<std::endl;
    std::cout<<std::endl;

    numeros.push_back(100);
    numeros.push_back(200);
    numeros.push_back(300);
    numeros.push_back(400);

    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Elemento na posição 0: "<<numeros[0]<<std::endl;
    std::cout<<"Elemento na posição 2: "<<numeros[2]<<std::endl;
    std::cout<<"Último elemento: "<<numeros[numeros.size() - 1]<<std::endl;
    return 0;
}