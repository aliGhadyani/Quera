#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 2];
    for (int i = 1; i < n + 1; i++)
        cin >> a[i];
    a[0] = 0;
    a[n + 1] = 0;
    int peak = 0;
    int valley = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i] >= a[i - 1] && a[i] > a[i + 1])
            peak++;
        else if (a[i] <= a[i - 1] && a[i] < a[i + 1])
            valley++;
    }
    if (peak > 0 && valley > 0)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}