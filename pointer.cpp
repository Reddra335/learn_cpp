#include <iostream>


int main(){

int umur1=20;
int* umur = &umur1;
*umur =30;
std::cout<<*umur<<"\n";
    return 0;
}