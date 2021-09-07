#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printData()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
};
int main()
{
    Complex c1(4, 5);
    c1.printData();

    Complex c2 = Complex(5, 6);
    c2.printData();
    return 0;
}