#include <iostream>


void SayHello(std::string name = "Reddra"){


    std::cout<<"Hello bro "+name<<"\n";
}

int main(){

SayHello("Ucin");
SayHello();
SayHello();
SayHello();
SayHello();



    return 0;
}