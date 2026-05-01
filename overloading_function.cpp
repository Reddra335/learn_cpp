#include <iostream>

int DoubleInt(int a, int b)
{

    return a + b;
}
int DoubleInt(double a, double b)
{

    return a + b;
}

int main()
{
int sumInt =DoubleInt(3,5); 
double sumDouble=DoubleInt(3.5,5.5); 

std::cout<<sumInt<<"\n"<<sumDouble<<"\n";

    return 0;
}
