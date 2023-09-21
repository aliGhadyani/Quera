#include <iostream>

using namespace std;

int main()
{
    int a, b, l;
    int time = 0;
    cin >> a >> b >> l;
    for (int i = 0; i < l; i++)
    {
        if (i % 2 == 0)
            time += a;
        else
            time += b;
    }
    cout << time;
    return 0;
}
