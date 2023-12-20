#include <iostream>

using namespace std;

void decToBin(int num)
{
    string binary = "";
    char temp;
    while (num != 1)
    {
        binary = to_string(num % 2) + binary;
        num = num / 2;
    }

    cout << to_string(1) + binary;
}

int main()
{
    int num;
    cout << "Enter a decimal: ";
    cin >> num;

    decToBin(num);

    return 0;
}