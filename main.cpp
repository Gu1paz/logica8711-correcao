#include<iostream>

void verificarAprovacao(float nota){
    if(nota >= 7){
        std::cout<<"Status: Aprovado!"<<std::endl;
    }else{
        std::cout<<"Status: Reprovado!"<<std::endl;
    }
}

int main(){

    float minhaNota = 8.5;
    
    verificarAprovacao(minhaNota);
    

    return 0;
}