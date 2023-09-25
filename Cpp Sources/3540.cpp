#include <iostream>

using namespace std;

int main()
{
    int n, x, y;

    cin >> n >> x >> y;

    for (int i = n / x; i >= 0; i--)
    {
        for (int j = 0; j <= n / y; j++)
        {
            if ((i * x) + (j * y) == n)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}
