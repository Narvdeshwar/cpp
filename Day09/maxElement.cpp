#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // max of 2d array
    int maxNumber = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (maxNumber < arr[i][j])
                maxNumber = max(maxNumber, arr[i][j]);
        }
    }
    cout << maxNumber << endl;
}