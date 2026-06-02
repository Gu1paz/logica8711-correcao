#include<iostream>
#include<string>
#include<cctype>
#include<Windows.h>

bool ehPalindromo(std::string s, int inicio, int fim){
    if(inicio >= fim){
        return true;
    }
    if(s[inicio] != s[fim]){
        return false;
    }
    return ehPalindromo(s, inicio + 1, fim -1);
} 

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string palavra;

    std::cout<<"Digite uma palavra: "<<std::endl;
    std::cin>>palavra;

    for(char &c : palavra){
        c = std::tolower(c);
    }
    
    if(ehPalindromo(palavra, 0, palavra.length() - 1)){
        std::cout<<"É palíndromo!"<<std::endl;
    }else{
        std::cout<<"Não é palíndromo!"<<std::endl;
    }


    return 0;
}