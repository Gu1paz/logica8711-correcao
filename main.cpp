#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> numeros;
    int quantidade;
    std::cout<<"Adicionar do usuário"<<std::endl;

    std::cout<<"Quantos números?"<<std::endl;
    std::cin>>quantidade;

    for(int i = 0; i < quantidade; i++){
        int numero;
        std::cout<<"Digite o número "<<(i + 1)<<" ";
        std::cin>>numero;
        numeros.push_back(numero);
    }

    std::cout<<"Números adicionados: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    
    return 0;
}