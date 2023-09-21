#include <iostream>

using namespace std;

int main()
{
    int angle1, angle2, angle3;

    cin >> angle1 >> angle2 >> angle3;

    if (angle1 == 0 || angle2 == 0 || angle3 == 0 || angle1 + angle2 + angle3 != 180)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}
