#include <iostream>
#include<string>

int main(){

    int num;

    do{
        std::cout<<"Digite um valor para num: "<<std::endl;
        std::cin>>num;

        if(num < 1 || num > 10){
            std::cout<<"Entrada Inválida!!"<<std::endl;
        }
    }while(num < 1 || num > 10);{
        std::cout<<"Obrigado!! Você escolheu o número: "<<num<<std::endl;
    }

    return 0;
}