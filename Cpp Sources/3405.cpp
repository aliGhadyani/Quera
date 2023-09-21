#include <iostream>

using namespace std;

int main()
{
    int ary[100000] = {
        0,
    };
    int count = 0;
    for (int i = 0; i == i; i++)
    {
        cin >> ary[i];
        if (ary[i] == 0)
            break;
        count++;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        cout << ary[i] << endl;
    }

    return 0;
}
