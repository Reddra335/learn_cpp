#include <iostream>

void faktorial(int n)
{
    if (n > 0)
    {
        std::cout<<n<<" ";
      faktorial(n - 1);
    }
}

int main(){
faktorial(10);

    return 0;
}
