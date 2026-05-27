#include<iostream>
#include<Windows.h>

bool ehPrimo(int numero){
    if(numero <= 1){
        return false;
    }

    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    std::cout<<"Digite um número: "<<std::endl;
    std::cin>>numero;

    if(ehPrimo(numero)){
        std::cout<<numero<<" é primo!"<<std::endl;
    }else{
        std::cout<<numero<<" Não é primo!"<<std::endl;
    }


}