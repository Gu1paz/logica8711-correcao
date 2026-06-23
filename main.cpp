#include<iostream>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Vetor inicializado com valores de 1 a 10
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = 10; // Definição correta do tamanho do array

    std::cout<<"==== PARES E IMPARES ===="<<std::endl;
    std::cout<<std::endl;
    
    // --- FILTRANDO OS NÚMEROS PARES ---
    std::cout<<"Pares: ";
    for(int i = 0; i < tamanho; i++){
        // Se o resto da divisão por 2 for 0, o número é par
        if(numeros[i] % 2 == 0){
            std::cout<<numeros[i]<<" ";
        }
    }
    std::cout<<std::endl; // Salta para a próxima linha no terminal
    
    // --- FILTRANDO OS NÚMEROS ÍMPARES ---
    std::cout<<"Ímpares: "; // Rótulo adicionado com sucesso!
    for(int i = 0; i < tamanho; i++){
        // Se o resto da divisão por 2 for diferente de 0, o número é ímpar
        if(numeros[i] % 2 != 0){
            std::cout<<numeros[i]<<" ";
        }
    }
    std::cout<<std::endl;

    return 0;
}