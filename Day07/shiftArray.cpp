#include <bits/stdc++.h>
using namespace std;
vector<int> shiftArray(vector<int> &arr, int size, int shift)
{
    int actualShift = shift % size;
    // base condition if actual shift is multiple of size then we don't need to perform the shifting operation
    if (actualShift == 0)
        return arr;

    // store the shifting variable into the temp array
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
    for (auto &elem : arr)
    {
        cout << elem << endl;
    }
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int shift = 4;
    shiftArray(arr, arr.size(), shift);
    return 0;
}