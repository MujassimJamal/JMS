#include <iostream>

using namespace std;

void generateTriangle(int range)
{
    int num = 1;

    for (int i = 0; i < range; i++)
    {
        // spacing
        for (int s = range - i; s > 0; s--)
        {
            cout << " ";
        }

        // left skewed
        for (int l = 0; l <= (i + i + 1) / 2; l++)
        {
            cout << num++ % 10;
        }

        num--;
        // right skewed
        for (int r = 0; r < (i + i + 1) / 2; r++)
        {
            cout << --num % 10;
        }
        cout << endl;

        num = 1;
    }
}

int main()
{
    int range;
    cout << "Enter the range= ";
    cin >> range;

    generateTriangle(range);

    return 0;
}