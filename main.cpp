#include<iostream>
#include<string>
#include<Windows.h>



int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string time1, time2;
    int gols1, gols2;

    std::cout<<"==== COMPARADOR DE PLACAR ===="<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Time 1: ";
    std::cin>>time1;
    std::cout<<"Gols time 1: ";
    std::cin>>gols1;

    std::cout<<"Time 2: ";
    std::cin>>time2;
    std::cout<<"Gols time 2: ";
    std::cin>>gols2;

    std::cout<<std::endl;
    std::cout<<"==== RESULTADO ===="<<std::endl;
    std::cout<<time1<<" "<<gols1<<" x "<<gols2<<" "<<time2<<std::endl;
    std::cout<<std::endl;


    
    return 0;
}