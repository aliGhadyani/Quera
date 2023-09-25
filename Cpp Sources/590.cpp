#include <iostream>

using namespace std;

int main()
{
    int x1, x2, min;
    cin >> x1 >> x2;
    if (x1 > x2)
    {
        min = x2;
    }
    else
    {
        min = x1;
    }
    for (int i = min; i > 0; i--)
    {
        if (x1 % i == 0 && (x1 % i) == (x2 % i))
        {
            cout << i << " ";
            break;
        }
    }
    for (int i = 1; i = i; i++)
    {
        if (i % x1 == 0 && (i % x1) == (i % x2))
        {
            cout << i << " ";
            break;
        }
    }
    return 0;
}
