#include <iostream>

struct Car
{
    std::string Name;
    int Year;
};

void MyCar(Car c)
{
    std::cout << c.Name << " " << c.Year << "\n";
}

void MyCar1(Car &c)
{
    std::cout << c.Name << " " << ++c.Year << "\n";
}
int main()
{
    Car car1 = {
        Name : "Toyota",
        Year : 4
    };
    MyCar(car1);
    MyCar1(car1);

    return 0;
}