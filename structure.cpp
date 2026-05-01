#include <iostream>

struct Person
{
    std::string Name;
    int Umur;
};

int main()
{
    Person mhs[] = {
        {Name : "Rendi", Umur : 19},
        {Name : "Ucin", Umur : 19},
        {Name : "Ando", Umur : 19},
        {Name : "Reyhan", Umur : 19},
        {Name : "Farid", Umur : 19},
        {Name : "Ruben", Umur : 19},
        {Name : "Riyan", Umur : 19},
        {Name : "Rey", Umur : 19},
        {Name : "Rama", Umur : 19},
        {Name : "Ayu", Umur : 19},
        {Name : "Angel", Umur : 19},

    };

    for (Person data : mhs)
    {
        std::cout << data.Name + " " << data.Umur << "\n";
    }
    return 0;
}