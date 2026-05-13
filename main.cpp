#include<iostream>
#include<Windows.h>

double saldo = 1000.9;
std::string titular = "Guilherme Paz";

void exibirSaldo(){
    std::cout<<" --- Saldo: R$ "<<saldo<<std::endl;
}

void depositar(double valor){
    if(valor > 0){
        saldo += valor;
        std::cout<<"Deposito reazlizado com sucesso!"<<std::endl;
    }else{
        std::cout<<"Valor inválido!"<<std::endl;
    }
}

void sacar(double valor){
    if(valor > 0 && valor <= saldo){
        saldo += valor;
        std::cout<<"Saldo insuficiente ou valor inválido!"<<std::endl;
    }
}

void exibirMenu(){
    std::cout<<"\n === MENU CONTA BANCÁRIA ==="<<std::endl;
    std::cout<<"1 - Ver saldo"<<std::endl;
    std::cout<<"2 - Depósito"<<std::endl;
    std::cout<<"3 - Sacar"<<std::endl;
    std::cout<<"4 - Sair"<<std::endl;
    std::cout<<"Digite uma opção: ";
}
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    double valor;

    do{
        exibirMenu();
        std::cin>>opcao;

        switch(opcao){
            case 1:
            exibirSaldo();
            break;
            case 2:
            std::cout<<"Digite o valor a depositar: "<<std::endl;
            std::cin>>valor;
            break;
            case 3:
            std::cout<<"Digite o valor a sacar: "<<std::endl;
            std::cin>>valor;
            sacar(valor);
            case 4:
            std::cout<<"Saindo da conta.."<<std::endl;
            break;
            default:
            std::cout<<"Opção inválida!"<<std::endl;
        }
    }while(opcao != 4);

    return 0;
}