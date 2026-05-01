#include <iostream>
#include <string>

int main()
{

    std::string name = "Rendi Damara";

    std::cout << name.length() << "\n";
    std::cout << name.size() << "\n";

    std::getline(std::cin, name);

    std::cout << name << "\n";
    return 0;
}