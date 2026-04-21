#include <iostream>
#include <algorithm>
#include <string>

struct Person
{

    std::string name;
    int umur;

} person;

int main()
{

    Person mhs[2] = {
        {name : "Rendi",
         umur : 19},
        {
            name : "Ucin",
            umur : 18
        }};



for(Person result:mhs){
    std::cout<<result.name<<std::endl;
    std::cout<<result.umur<<std::endl;
}

    return 0;
}