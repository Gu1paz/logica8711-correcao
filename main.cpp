#include<iostream>
#include<string>
#include<Windows.h>

struct CampeonatosCopa{
    int ano;
    std::string campeao;
};

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    CampeonatosCopa copa[5] = {
        {2022, "Argentina"},
        {2018, "França"},
        {2014, "Alemanha"},
        {2010, "Espanha"},
        {2006, "Italia"}
    };

    std::cout<<"==== Campeões da Copa ===="<<std::endl;
    std::cout<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<copa[i].ano<<" - Campeão: "<<copa[i].campeao<<std::endl;
    }

    return 0;
}