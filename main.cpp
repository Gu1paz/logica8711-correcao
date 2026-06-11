#include<iostream>
#include<string>
#include<Windows.h>

void torreDeHanoi(int n, std::string origem, std::string destino, std::string auxiliar){ 
    if(n == 1){
        std::cout<<"Mover disco "<<origem<<" para "<<destino<<std::endl;
        return;
    }
    torreDeHanoi(n - 1, origem, auxiliar, destino);
    std::cout<<"Mover disco "<<n<<" de "<<origem<<" para "<<destino<<std::endl;
    torreDeHanoi(n - 1, auxiliar, destino, origem);
    }

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numDiscos;
    std::cout<<"Quantos discos: ";
    std::cin>>numDiscos;

    std::cout<<"\nSequência de movimentos: "<<std::endl;
    torreDeHanoi(numDiscos, "A", "C", "B");

    std::cout<<"\nTotal de movimento: "<<(1 << numDiscos) - 1<<std::endl;


    return 0;
}