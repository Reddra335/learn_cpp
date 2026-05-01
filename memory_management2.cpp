#include <iostream>

int main(){

int num;

std::cout<<"Masukkan berapa banyak tamu : ";
std::cin>>num;

if(num<=0){
    std::cout<<"Minimal harus ada 1 tamu"<<"\n";
    return 0;
}

std::cin.ignore();
std::string* NamaTamu = new std::string[num];


for(int i =0; i<num;i++){
std::cout<<"Masukkan tamu ke "<<(i+1)<<" : ";
std::getline(std::cin,NamaTamu[i]);

}


std::cout<<"Nama tamu yang terdaftar : \n";
for (int i = 0; i < num; i++)
{

std::cout<<NamaTamu[i]<<"\n";
}


delete[] NamaTamu;









    return 0;
}