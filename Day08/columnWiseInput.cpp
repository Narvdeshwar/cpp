#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input column wise
    int row = 3, col = 3;
    int arr[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the element for(" << j << "," << i << ") = ";
            cin >> arr[j][i];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Element at index(" << i << "," << j << ") = " << arr[i][j] << endl;
            ;
        }
    }
    return 0;
}