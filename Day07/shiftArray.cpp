#include <bits/stdc++.h>
using namespace std;
void shiftArray(vector<int> &arr, int size, int shift)
{
    // This approach uses the O(n) time and O(K) as a space complexity.
    int actualShift = shift % size;
    // base condition if actual shift is multiple of size then we don't need to perform the shifting operation
    if (actualShift == 0)
        return;

    // store the data into the temp array which we have to shift
    vector<int> temp;

    for (int i = size - actualShift; i < size; i++)
    {
        temp.push_back(arr[i]);
    }

    // shifting of array element
    for (int i = size - actualShift - 1; i >= 0; i--)
    {
        arr[i + actualShift] = arr[i];
    }
    // putting the temp array in starting point
    for (int i = 0; i < actualShift; i++)
    {
        arr[i] = temp[i];
    }
}
void revereArray(vector<int> &arr, int startIndex, int endIndex)
{
    while (startIndex < endIndex)
    {
        swap(arr[startIndex++], arr[endIndex--]);
    }
}

void shiftArrayOptimised(vector<int> &arr, int size, int shift)
{
    // calculate the actual count of shift first
    int actualShift = shift % size;

    // step 1: reverse the whole array like our array is 10,20,30,40,50
    revereArray(arr, 0, size - 1);
    // now the after performing step 1 array become 50,40,30,20,10

    // step 2: reverse the array 
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int shift = 4;
    shiftArray(arr, arr.size(), shift);
    for (auto &elem : arr)
    {
        cout << elem << " ";
    }
    return 0;
}