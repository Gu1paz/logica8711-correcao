#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;
    int soma = 0;

    std::cout<<"==== SOMA DOS VECTORES ===="<<std::endl;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);

    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        soma += numeros[i];
    }
    std::cout<<"A soma dos números é: "<<soma<<std::endl;



    return 0;
}