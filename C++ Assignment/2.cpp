#include <iostream>

using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter a number larger than 1: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << "prime number";
    }
    else
    {
        cout << "not prime number";
    }

    return 0;
}