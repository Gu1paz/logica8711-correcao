#include<iostream>

int doubleGame(int x){
    return x * 2;
}

int main(){

    for(int i = 1; i <= 5; i++){
        std::cout<<"O dobre de "<<i<<" é "<<doubleGame(i)<<std::endl;
    }


    return 0;
}