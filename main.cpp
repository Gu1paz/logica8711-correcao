#include<iostream>

int main(){

    int num;

    std::cout<<"Por favor digite um número: "<<std::endl;
    std::cin>>num;

    std::cout<<num%2<<std::endl;

    if(num%2 == 0){
        //todo número par sempre vai sobrar 0
        std::cout<<"Este número é par: "<<std::endl;
    }else{
        //todo número ímpar sempre vai sobrar 1
        std::cout<<"Este número é ímpar: "<<std::endl;
    }



    return 0;
}