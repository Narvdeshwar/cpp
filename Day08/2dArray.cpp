#include <bits/stdc++.h>
using namespace std;

void PrintLeftToRightDiagonal(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][i] << endl;
    }
}

void PrintRightToLeftDiagonal(int arr[][3], int row, int col)
{
    int cols = col - 1;
    for (int i = 0; i < row && i < col; i++)
    {
        cout << arr[i][cols - i] << endl;
    }
}

bool FindTargetElement(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

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

    // int arr[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};
    return 0;
}