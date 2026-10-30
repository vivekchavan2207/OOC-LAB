#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }

    return (double)a / b;
}

int main()
{
    int x = 50;
    int y = 0;

    try
    {
        cout << division(x, y);
    }
    catch (const char* msg)
    {
        cout << msg;
    }

    return 0;
}
