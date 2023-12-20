#include <iostream>

using namespace std;

void swapNums(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{

    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    swapNums(a, b);

    cout << "a = " << a << ", b = " << b;

    return 0;
}