#include <bits/stdc++.h>
using namespace std;

int uniqueElemenet(vector<int> &arr, int size)
{
    int ans = arr[0];
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 1, 1, 2, 3, 0, 0, 5};
    int n = arr.size();
    cout << uniqueElemenet(arr, n) << endl;
    return 0;
}