#include<iostream>
#include<cctype>
#include<Windows.h>

bool ehPalindromo(std:: string s){
    int inicio = 0;
    int fim = s.length() - 1;

    while(inicio < fim){
        if(s[inicio] != s[fim]){
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string palavra;

    std::cout<<"Digite uma palavra: "<<std::endl;
    std::cin>>palavra;

    for(int i = 0; i< palavra.length(); i++){
        palavra[i] = std::tolower(palavra[i]);
    }

    if(ehPalindromo(palavra)){
        std::cout<<"É palindromo!"<<std::endl;
    }else{
        std::cout<<"Não é palindromo!"<<std::endl;
    }


    return 0;
}