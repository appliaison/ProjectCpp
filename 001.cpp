#include <iostream>

int f()
{

    int x = 1;
    int y = x;
    x = 2;
    return y;
}

int main()
{
    std::cout << "Hello World" << std::endl;
    for (int i=0;i<10;i++)
    {
        std::cout << "Value of y is " << f() << std::endl;
    }
    return 0;
}

