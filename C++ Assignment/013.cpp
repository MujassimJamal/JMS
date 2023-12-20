#include <iostream>

using namespace std;

void fabTriangle(unsigned int num)
{
    for (int i = 0; i < num; i++)
    {
        unsigned int lptr = 1, rptr = 0, t = 0;
        for (int j = 0; j <= i; j++)
        {
            t = lptr + rptr;
            cout << t << "    ";
            lptr = rptr;
            rptr = t;
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a range: ";
    cin >> num;

    fabTriangle(num);

    return 0;
}