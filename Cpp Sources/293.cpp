#include <iostream>

using namespace std;

int main()
{
    int x, y, max, min;

    cin >> x >> y;

    if (x > y)
    {
        max = x;
        min = y;
    }
    else
    {
        min = x;
        max = y;
    }
    for (int j = min; j <= max; j++)
    {
        int a = 0;
        for (int i = 1; i <= max; i++)
        {
            if (j % i == 0)
            {
                a++;
            }
        }
        if (a == 2)
        {
            cout << j << endl;
        }
    }
}
