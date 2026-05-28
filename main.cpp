#include<iostream>
#include<Windows.h>

void contar(int numero){
    if(numero == 0){
        std::cout<<"PARE!!\n";
        return;
    }
    std::cout<<numero<<"\n";

    contar(numero - 1);
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    contar(5);


    return 0;
}