#include <iostream>

using namespace std;

// with recursion
template <class T>
void fabRecursion(T num, T lptr, T rptr, T t)
{
    t = lptr + rptr;
    cout << t << " ";
    lptr = rptr;
    rptr = t;

    if (--num > 0)
    {
        fabRecursion(num, lptr, rptr, t);
    }
}

// without recursion
template <class T>
void fabIter(T num, T lptr, T rptr, T t)
{
    for (int i = 0; i < num; i++)
    {
        t = lptr + rptr;
        cout << t << " ";
        lptr = rptr;
        rptr = t;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    unsigned int lprt = -1, rptr = 1, t = 0;
    fabRecursion<unsigned int>(num, lprt, rptr, t);
    // fabRecursion<unsigned int>(num, lprt, rptr, t);

    return 0;
}