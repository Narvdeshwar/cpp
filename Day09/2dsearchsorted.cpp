#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    bool ans = false;
    int row = 0, col = 2, target = 5;

    while (row < 3 && col >= 0)
    {
        if (arr[row][col] == target)
        {
            ans = true;
            break;  // Exit the loop as we found the target
        }
        else if (arr[row][col] > target)
        {
            col--;  // Move left
        }
        else
        {
            row++;  // Move down
        }
    }

    if (ans)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
