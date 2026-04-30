#include<iostream>

int main(){

    //brlAmount: valor em rais | exchangeRate: Taxa de Câmbio | usdAmount: Valor em dólares
    double brlAmount, exchangeRate, usdAmount;

    std::cout<<"----- Currency Converter: BRL to USD -----"<<std::endl;

    //Entrada da taxa de câmbio (quanto vale 1 dolar hoje)
    std::cout<<"Enter the current exchange rate (How much is 1 dollar in Reais?): "<<std::endl;
    std::cin>>exchangeRate;

    //Entrada de quantia em Reais que a pessoa deseja converter
    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>brlAmount;

    //Verificação Lógica: garante que o valor informado seja positivo
    if(brlAmount > 0){
        //Calculo: divide o montante em reais pela taxa de câmbio
        usdAmount = brlAmount / exchangeRate;
        std::cout<<"You will have $"<<usdAmount<<" US Dollars."<<std::endl;
    }else{
        //Mensagem de erro caso o valor seja zero ou negativo
        std::cout<<"Error: Please enter a valid amount greater than zero."<<std::endl;
    }


    return 0;
}