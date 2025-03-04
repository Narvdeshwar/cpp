#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // min of 2d array
    int minNumber = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (minNumber > arr[i][j])
                minNumber = min(arr[i][j], minNumber);
        }
    }
    cout << minNumber << endl;
}