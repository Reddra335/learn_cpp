#include <iostream>
#include <string>

int main()
{

    double voltage, ampere;

    std::cout << "======Selamat Datang Di Pemutus Sirkuit Cerdas======" << std::endl;

    std::cout << "Masukkan Voltage : ";
    std::cin >> voltage;
    std::cout << "Masukkan Ampere : ";
    std::cin >> ampere;

    if (voltage > 400 || ampere > 100)
    {
        std::cout << "POWER_CUT_IMMEDIATE" << std::endl;
    }
    else if (voltage < 180)

    {
        std::cout << "WARNING_LOW_VOLTAGE" << std::endl;
    }
    else if (ampere > 16)
    {

        std::cout << "WARNING_OVERLOAD" << std::endl;
    }
    else if (voltage >= 180 && voltage <= 240 && ampere <= 16)
    {
        std::cout << "Normal" << std::endl;
    } else {
        std::cout<<"Salah input";
    }

    return 0;
}