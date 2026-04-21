#include <iostream>

int main()
{

    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout << i << std::endl;
    //     if (i == 8)
    //     {
    //         break;
    //     }
    // }
    for (int i = 1; i <= 100000; i++)
    {
        if (i % 2 == 1)
        {

            continue;
        }
                std::cout << i << std::endl;

    }

    return 0;
}