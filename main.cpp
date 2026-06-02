#include<iostream>
#include<string>
#include<cctype>
#include<Windows.h>

void dividir(int a, int b, int* quociente, int* resto){
    *quociente = a / b;
    *resto = a % b;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int q, r;

    dividir(17, 5, &q, &r);
    std::cout<<"Quociente: "<<q<<", Resto: "<<r<<std::endl;


    return 0;
}