#include <iostream>

int main(){
int umur =20;

int *umur1 =&umur;
*umur1 =30;
std::cout<< umur<<"\n";

    return 0;
}