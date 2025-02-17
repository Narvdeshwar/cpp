#include <bits/stdc++.h>
using namespace std;
int printAllPairs(vector<int> arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++, count++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout << "Total numbers of pairs are : " << printAllPairs(arr, n);
    return 0;
}