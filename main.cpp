#include<iostream>
#include<Windows.h>

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n -1) + fibonacci(n - 2);
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<fibonacci(6)<<std::endl;


    return 0;
}