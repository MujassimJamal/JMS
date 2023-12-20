#include <iostream>

using namespace std;

int fact(int num, int &result)
{
    if (num > 0)
    {
        result = result * num--;
        return fact(num, result);
    }

    return result;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = 1;
    if (num < 0)
    {
        cout << "Number must be positive!!!";
    }
    else
    {
        cout << "Factorial of " << num << " is " << fact(num, result);
    }

    return 0;
}