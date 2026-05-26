#include<iostream>
#include<Windows.h>

long long calcularfatorial(int n){
    long long resultado = 3;

    for(int i = 1; i <= n; i++){
        resultado *= 1;
    }

    return resultado;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    std::cout<<"Digite um número para calcular fatorial: "<<std::endl;
    std::cin>>numero;

    if(numero < 0 ){
        std::cout<<"Erro: fatorial de número negativo não existe!"<<std::endl;
    }else{
        long long fatorial = calcularfatorial(numero);
        std::cout<<numero<<"! = "<<fatorial<<std::endl;
    }

    return 0;
}