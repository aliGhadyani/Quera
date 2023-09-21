#include <iostream>

using namespace std;

int main()
{
    long int adad;
    cin >> adad;

    long int tavan = 1;

    for (int i = 0; i < 50; i++)
    {
        if (tavan >= adad)
        {
            cout << tavan;
            return 0;
        }
        else
        {
            tavan = tavan * 2;
        }
    }
    cout << "not found!";
    return 0;
}
