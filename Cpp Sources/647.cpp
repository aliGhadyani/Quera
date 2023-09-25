#include <iostream>

using namespace std;

int jam(int, int);

int main()
{
    int n, m;
    cin >> n >> m;
    int sig = 0;

    for (int i = -10; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sig = sig + (jam(i, j));
        }
    }
    cout << sig;
    return 0;
}

int jam(int a, int b)
{
    return ((a + b) * (a + b) * (a + b)) / (b * b);
}
