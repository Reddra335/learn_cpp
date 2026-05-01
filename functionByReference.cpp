#include <iostream>

void Ubah(int &num)
{
    num = 70;
};

int main()
{
int uji =10;
Ubah(uji);

std::cout<<uji;
    return 0;
}