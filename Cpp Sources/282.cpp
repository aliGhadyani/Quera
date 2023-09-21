#include <iostream>

using namespace std;

int main()
{
    int x, y = 0;
    cin >> x;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            y += i;
        }
    }
    if (y == x)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
