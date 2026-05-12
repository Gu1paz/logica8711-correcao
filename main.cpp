#include<iostream>
#include<Windows.h>

    float somar(float a, float b){
        return a + b;
    }

    float subtrair(float a, float b){
        return a - b;
    }

    float multiplicar(float a, float b){
        return a * b;
    }

    float dividir(float a, float b){
        if(b == 0){
            std::cout<<"Não é possível divir por 0!"<<std::endl;
            return 0;
        }else{
        return a / b;    
        }
    }

    void coletarNumeros(float &a, float &b){
        std::cout<<"Digite um valor para a: "<<std::endl;
        std::cin>>a;

        std::cout<<"Digite um valor para b: "<<std::endl;
        std::cin>>b;
    }
    
    void exibirResultado(float &a, float &b){
        coletarNumeros(a, b);

        int op;
        std::cout<<"Digite uma opção: "<<std::endl;
        std::cout<<"1 - soma"<<std::endl;
        std::cout<<"2 - subtrair"<<std::endl;
        std::cout<<"3 - multiplicar"<<std::endl;
        std::cout<<"4 - dividir"<<std::endl;
        std::cin>>op;

        switch(op){
            case 1:
            std::cout<<"O resultado é: "<<somar(a, b)<<std::endl;
            break;
            case 2:
            std::cout<<"O resultado é: "<<subtrair(a, b)<<std::endl;
            break;
            case 3:
            std::cout<<"O resultado é: "<<multiplicar(a, b)<<std::endl;
            break;
            case 4:
            std::cout<<"O resultado é: "<<dividir(a, b)<<std::endl;
            break;
            default:
            std::cout<<"Você digitou o um valor inválido!"<<std::endl;
        }
    }

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float num1 = 0, num2 = 0;
    exibirResultado(num1, num2);    

    return 0;
}