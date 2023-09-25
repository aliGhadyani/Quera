#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int mat1[x][y];
    int mat2[y][z];
    int mat3[x][z];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            mat3[i][j] = 0;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cin >> mat2[i][j];
        }
    }

    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < z; i++)
        {
            for (int k = 0; k < y; k++)
            {
                mat3[j][i] = mat1[j][k] * mat2[k][i] + mat3[j][i];
            }
            cout << mat3[j][i] << "\t";
        }
        cout << endl;
    }
}
