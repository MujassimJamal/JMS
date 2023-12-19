#include <iostream>
using namespace std;

void generateTriangle(int n)
{
    char letter = 65;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        // spacing
        for (int s = n - i; s > 0; s--)
        {
            cout << " ";
        }

        // left skewed triangle
        for (int c = 0; c <= (i + j) / 2; c++)
        {
            cout << letter++;
        }

        letter--;

        // right skewed triangle
        for (int c = 0; c < (i + j) / 2; c++)
        {
            cout << --letter;
        }
        cout << endl;

        letter = 65;
        j++;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    generateTriangle(n);

    return 0;
}