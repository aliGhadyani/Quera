#include <iostream>

using namespace std;

int main()
{
    int x1, x2;
    cin >> x1 >> x2;

    int y1 = ((x1 % 10) * 100) + ((x1 % 100) - (x1 % 10)) + (x1 / 100);
    int y2 = ((x2 % 10) * 100) + ((x2 % 100) - (x2 % 10)) + (x2 / 100);

    if (y1 > y2)
    {
        cout << x2 << " < " << x1;
    }
    else if (y2 > y1)
    {
        cout << x1 << " < " << x2;
    }
    else
    {
        cout << x1 << " = " << x2;
    }

    return 0;
}
