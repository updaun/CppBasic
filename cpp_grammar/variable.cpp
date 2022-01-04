#include <iostream>

using namespace std;

int main()
{
    int a;
    a = 7;

    int b = 3;

    a = 5;
    b = 10;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a = " << &a << ", b = " << &b << endl;

    return 0;
}