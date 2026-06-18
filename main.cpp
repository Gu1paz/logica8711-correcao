#include<iostream>
#include<string>
#include<Windows.h>

struct Jogador{
    std::string nome;
    int cartaoAmarelo;
    int cartaoVermelho;
};

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"==== REGISTRO DE CARTÕES"<<std::endl;
    std::cout<<std::endl;

    Jogador jogador;

    std::cout<<"Nome do jogador: ";
    std::cin>>jogador.nome;

    std::cout<<"Cartões amarelos: "<<std::endl;
    std::cin>>jogador.cartaoAmarelo;

    std::cout<<"Cartões vermelhos: "<<std::endl;
    std::cin>>jogador.cartaoVermelho;

    std::cout<<std::endl;
    std::cout<<"==== SITUAÇÃO ===="<<std::endl;
    
    if(jogador.cartaoVermelho > 0){
        std::cout<<jogador.nome<<" foi expulso!"<<std::endl;
    }else if(jogador.cartaoAmarelo >= 2){
        std::cout<<jogador.cartaoAmarelo<<" recebeu 2 amarelos e foi expulso!"<<std::endl;
    }else if(jogador.cartaoAmarelo == 1){
        std::cout<<jogador.nome<<" recebeu 1 amarelo. Cuidado!"<<std::endl;
    }else{
        std::cout<<jogador.nome<<" está limpo!"<<std::endl;
    }

    return 0;
}