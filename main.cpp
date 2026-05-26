#include<iostream>
#include<Windows.h>

int cubo(int c){
    return c * c* c;
}

int quadrado(int n){
    return n * n;
}
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"Quadrado de 5: "<<quadrado(5)<<"cubo de 3: "<<cubo(3)<<std::endl;
    std::cout<<"Quadrado de 8: "<<quadrado(8)<<"cubo de 6: "<<cubo(6)<<std::endl;
    std::cout<<"Quadrado de 10: "<<quadrado(10)<<"cubo de 9: "<<cubo(9)<<std::endl;

    return 0;
}