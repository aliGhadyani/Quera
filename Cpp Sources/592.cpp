#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    for (int i = 2; i <= z; i++)
    {
        if ((x % i) == (y % i))
        {
            cout << i << " ";
        }
    }
}
