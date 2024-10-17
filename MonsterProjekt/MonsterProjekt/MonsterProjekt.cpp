#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    int c;
    if (a > b)
        c = a;
    else
        c = b;

    c = a > b ? a : b;

    std::cout << "Hello World!\n";
}