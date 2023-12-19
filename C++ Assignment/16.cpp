#include <iostream>

using namespace std;

void findNumAndIndex(int *ptr, size_t size)
{
    int minNum = *ptr, index = 0;
    ptr++;

    for (int i = 1; i < size; i++)
    {
        if (*ptr > minNum)
        {
            minNum = *ptr;
            index = i;
        }
        ptr++;
    }

    cout << endl;
    cout << "NUM: " << minNum << endl;
    cout << "INDEX: " << index << endl;
}

int main()
{

    int len;
    cout << "Enter size of the array: ";
    cin >> len;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cout << "element " << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << "arr = {";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "}" << endl;

    findNumAndIndex(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}