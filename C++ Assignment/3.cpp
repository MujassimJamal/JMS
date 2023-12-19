#include <iostream>
#include <cmath>

using namespace std;

int lenOFNum(int &num)
{
    int size = 0;
    int temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        size++;
    }

    return size;
}

bool isPalindrom(int num)
{
    int size = lenOFNum(num);
    int l = size - 1;
    int tempNum = num;
    int factor, firstDigit, lastDigit;

    while (l >= size / 2 && tempNum > 0)
    {
        factor = pow(10, l);
        firstDigit = num / factor;
        num = num % factor;
        lastDigit = tempNum % 10;
        tempNum = tempNum / 10;

        // cout << "First digit: " << firstDigit << endl;
        // cout << "Last digit: " << lastDigit << endl;
        if (firstDigit != lastDigit)
        {
            return false;
        }

        l--;
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrom(num))
    {
        cout << "Palindrom Number" << endl;
    }
    else
    {
        cout << "Not palindrom Number" << endl;
    }

    return 0;
}