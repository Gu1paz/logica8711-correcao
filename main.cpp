#include<iostream>

int main(){

    int idade;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade < 0){
        std::cout<<"idade inávlida"<<std::endl;
    }else if(idade <= 2){
        std::cout<<"Você é um bebê!"<<std::endl;
    }else if( idade <= 8){
        std::cout<<"Você é uma criança!"<<std::endl;
    }else if(idade <= 16){
        std::cout<<"Você é um(a) adolescente"<<std::endl;
    }else if(idade <= 60){
        std::cout<<"Você é um adulto(a)!"<<std::endl;
    }else{
        std::cout<<"Você é um(a) sênior!"<<std::endl;
    }
        
    
    


    return 0;
}