#include <iostream>
#include <unordered_map>

using namespace std;

void numToChars(int num, unordered_map<int, string> &hmap)
{
    string result = "";
    while (num > 0)
    {
        result = hmap[num % 10] + " " + result;
        num = num / 10;
    }

    cout << result;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    unordered_map<int, string> numToCharMap;
    numToCharMap[0] = "Zero";
    numToCharMap[1] = "One";
    numToCharMap[2] = "Two";
    numToCharMap[3] = "Three";
    numToCharMap[4] = "Four";
    numToCharMap[5] = "Five";
    numToCharMap[6] = "Six";
    numToCharMap[7] = "Seven";
    numToCharMap[8] = "Eight";
    numToCharMap[9] = "Nine";

    numToChars(num, numToCharMap);

    return 0;
}