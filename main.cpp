#include<iostream>
#include<string>
#include<Windows.h>

int horner(int * coeficientes, int grau, int x){
    int resultado = coeficientes[grau];
    for(int i = grau - 1; i >= 0; i--){
        resultado = resultado * x + coeficientes[i];
    }
    return resultado;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int coef[] = {5, 4, 3, 2};
    std::cout<<"p(2) = "<<horner<<(coef, 3, 2)<<std::endl;


    return 0;
}