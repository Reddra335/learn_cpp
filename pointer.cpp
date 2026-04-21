#include <iostream>

int main(){
int uji =100;
int* hasil =&uji;

std::cout<<*hasil<<std::endl;


*hasil =225;

std::cout<<*hasil<<std::endl;
std::cout<<uji<<std::endl;
    return 0;
}