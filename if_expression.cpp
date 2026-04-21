#include <iostream>
#include <string>

int main()
{

    int a, b = 80;
    std::cout << "Masukkan angka pertama: ";
    std::cin >> a;

    if (a > b)
    {

        std::cout << "Anda lulus" << std::endl;
    }
    else
    {
        std::cout << "Anda tidak lulus" << std::endl;
    }

    return 0;
}