#include <iostream>

using namespace std;

bool aval(int);

int main()
{
    int x;
    cin >> x;

    int b = 0, z = x;
    while (z > 0)
    {
        b = (z % 10) + b;
        z = z / 10;
    }

    for (int i = x + 1; i = i; i++)
    {
        if (aval(i))
            b--;
        if (b == 0)
        {
            cout << i;
            return 0;
        }
    }
}

bool aval(int a)
{
    for (int i = 2; i <= a / 2; i++)
        if ((a % i) == 0)
            return false;
    return true;
}
