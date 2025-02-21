#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr;
    // taking input from the user
    int rows, coloumns;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of column : ";
    cin >> coloumns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            cout << arr[i][j];
        }
    }
    return 0;
}