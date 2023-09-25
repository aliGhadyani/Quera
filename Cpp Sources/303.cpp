#include <iostream>

using namespace std;

void ShowFibNth(long int n, long int m);

int main()
{
    int x, y;
    cin >> x >> y;
    ShowFibNth(x, y);
    return 0;
}

void ShowFibNth(long int n, long int m)
{
    if (m > 0 && n > -1)
        cout << n << endl;
    if (m > 1 && n > 0)
        return ShowFibNth(m - n, n);
}
