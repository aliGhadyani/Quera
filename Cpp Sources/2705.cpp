#include <iostream>

using namespace std;

int main()
{
    int p, d;
    cin >> p >> d;
    int x = d;
    while (x % p > p / 2)
        x += d;
    cout << x << endl;
    return 0;
}
