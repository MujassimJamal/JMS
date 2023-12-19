#include <iostream>
#include <cmath>

using namespace std;

int lenOfNum(int n)
{
    int size = 0;
    while (n > 0)
    {
        size++;
        n = n / 10;
    }

    return size;
}

void checkArmstrong(int n)
{
    int len = lenOfNum(n);
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        sum = sum + pow(temp % 10, len);
        temp = temp / 10;
    }

    if (sum == n)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    checkArmstrong(n);

    return 0;
}