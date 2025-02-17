#include <bits/stdc++.h>
using namespace std;

int allTriplets(vector<int> arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; j < size; j++, count++)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout << "Total numbers of triplets are: " << allTriplets(arr, n) << endl;
    return 0;
}