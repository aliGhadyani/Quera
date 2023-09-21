#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    cout << ((c<10.5) ? "Right ":"Left ");
    cout << 10-r+1 << " ";
    cout << 10 - abs(10-c);
    return 0;
}
