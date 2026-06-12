#include<iostream>
#include<string>
#include<Windows.h>

int encontrarMaior(int* arr, int tamanho){
    int maior = arr[0];
    for(int i = 1; i < tamanho; i++){
        if(arr[i] > maior){
            maior = arr[i];
        }
    }
    return maior;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] = {3, 7, 2, 9, 1, 5};
    std::cout<<"Maior elemento: "<<encontrarMaior(arr, 0)<<std::endl;



    return 0;
}