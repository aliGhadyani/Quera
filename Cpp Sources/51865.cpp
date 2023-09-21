#include<iostream>

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    if (n == 0)
        cout << 20;
    else if(n == 7)
        cout << x;
    else
    {
        int res = x - n;
        cout << ((res <= 0) ? 0:res);
    }
    return 0;
}
