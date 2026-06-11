#include<iostream>
#include<string>
#include<Windows.h>

int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b, a % b);
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"MDC(48, 18) = "<<mdc(48, 18)<<std::endl;
    std::cout<<"MDC(100, 50) = "<<mdc(100, 50)<<std::endl;



    return 0;
}