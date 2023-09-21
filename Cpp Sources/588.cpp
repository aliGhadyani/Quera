#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    int max = 1;
    for (int i = 1; i <= x; i++)
    {
        cin >> y;
        if (y > max)
        {
            max = y;
        }
    }
    cout << max;
    return 0;
}
