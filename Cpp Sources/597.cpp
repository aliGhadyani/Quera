#include <iostream>

using namespace std;

int zoj(int);

int fard(int);

int main()
{
    int x, z;
    cin >> x;
    if (x == 1)
    {
        cout << 0 << " " << 0;
        return 0;
    }
    if (x % 2 == 0)
        z = zoj(x);
    else
        z = fard(x);

    if (z == 4)
    {
        cout << -1 * (x / 4) << " " << x / 4;
    }
    else if (z == 2)
    {
        cout << ((x - 2) / 4) + 1 << " " << -1 * ((x - 2) / 4);
    }
    else if (z == 3)
    {
        cout << x / 3 << " " << x / 3;
    }
    else if (z == 5)
    {
        cout << (x / 4) * -1 << " " << (x / 4) * -1;
    }
    return 0;
}

int zoj(int a)
{
    if ((a % 4) == 0)
    {
        return 4;
    }
    return 2;
}

int fard(int a)
{
    for (int i = a; i > 0; i = i - 4)
    {
        if (i == 3)
            return 3;
        else if (i == 1)
            return 5;
    }
}
