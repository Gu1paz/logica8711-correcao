#include<iostream>
#include<Windows.h>

int somarVetor(int vetor[], int indice){
    if(indice == 0){
        return vetor[0];
    }

    return vetor[indice] + somarVetor(vetor, indice - 1);
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero[5] = {10, 20, 30 ,40 ,50};

    std::cout<<"Soma recursiva: "<<somarVetor(numero, 4)<<std::endl;


    return 0;
}