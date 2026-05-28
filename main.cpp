#include<iostream>
#include<Windows.h>

int fibonacci(int n){
    std::cout<<"calculando fib("<< n<<")"<<std::endl;

    if(n == 0){
        std::cout<<"fib(0) = 0 (PARADA)"<<std::endl;
        return 0;
    }
    if(n == 1){
        std::cout<<"Fib(1) = 1 (PARADA)"<<std::endl;
        return 1;
    }

    std::cout<<"Fib("<<n<<") = Fib("<<(n-1)<<") + Fib("<<(n-2)<<")\n";
    int resultado = fibonacci(n -1) + fibonacci(n - 2);
    std::cout<<"Fib(" << n << ") = "<< resultado << "\n";
    return resultado;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    fibonacci(4);


    return 0;
}