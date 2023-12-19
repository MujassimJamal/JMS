#include <iostream>
#include <cmath>

using namespace std;

int numSize(int num)
{
    int size = 0;
    while (num > 0)
    {
        num = num / 10;
        size++;
    }

    return size;
}

int reverse(int num)
{
    int result = 0;
    while (num > 0)
    {
        result = result + num % 10;
        num = num / 10;
        if (num > 0)
        {
            result = result * 10;
        }
    }

    return result;
}

int main()
{
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;

    int result = reverse(num);
    if (numSize(result) != numSize(num))
    {
        int leadingZeros = numSize(num) - numSize(result);
        while (leadingZeros > 0)
        {
            printf("%01i", 0);
            leadingZeros--;
        }
        cout << result;
    }
    else
    {
        cout << result;
    }

    return 0;
}