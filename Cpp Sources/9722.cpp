#include <iostream>

using namespace std;

bool isAval(int a)
{
    if (a == 2)
        return true;

    for (int i = 2; i <= a / 2 + 1; i++)
        if (a % i == 0)
            return false;
    return true;
}

void func(int n, int r)
{
    if (r == 0)
    {
        cout << n << endl;
        return;
    }
    for (int i = 1; i < 10; i++)
    {
        if (isAval(10 * n + i))
            func(10 * n + i, r - 1);
    }
}

int main()
{
    int N;

    cin >> N;

    for (int i = 2; i < 10; i++)
    {
        if (isAval(i))
            func(i, N - 1);
    }

    return 0;
}
