#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 0)
    {
        cout << "Ice";
    }
    else if (x >= 0 && x <= 100)
    {
        cout << "Water";
    }
    else
    {
        cout << "Steam";
    }
    return 0;
}
