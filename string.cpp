#include <iostream>
#include <string>

int main()
{

    std::string name = "Rendi";

std::cout<<name[0]<<std::endl;

std::cout<<name.size()<<std::endl;

std::cout<<name[name.length()-1]<<std::endl;


std::cout<<"\"haiii\""<<std::endl;
std::cout<<"\'haiii\'"<<std::endl;
std::cout<<name+" "<<std::endl;
std::cout<<name+"\n";
std::cout<<name+"\t"+"uhuy"<<std::endl;


std::cout<<"Masukkan nama : ";
std::getline(std::cin,name);

std::cout<<"nama kamu adalah "+name;



    return 0;
}