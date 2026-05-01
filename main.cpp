#include<iostream>

int main(){

    int totalSeconds;

    std::cout<<"Enter total Seconds: "<<std::endl;
    std::cin>>totalSeconds;

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    std::cout<<"Time: "<<minutes<<" minutes and "<<seconds<<" seconds."<<std::endl;


    return 0;
}