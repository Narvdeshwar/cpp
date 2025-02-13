#include <bits/stdc++.h>
using namespace std;
void sortzeroandone(vector<int> &arr, int size)
{
    // for edge case
    if (size == 0 || size == 1)
        return;
    // if input size is greater than 1
    int startIndex = 0, lastIndex = size - 1;
    while (startIndex < lastIndex)
    {

        if (arr[startIndex] == 0)
        {
            startIndex++;
        }
        else if (arr[lastIndex] == 1)
        {
            lastIndex--;
        }
        else if (arr[startIndex] == 1 && arr[lastIndex] == 0)
        {
            swap(arr[startIndex], arr[lastIndex]);
            startIndex++;
            lastIndex--;
        }
    }
}
void printArray(vector<int> &arr)
{
    for (auto elem : arr)
    {
        cout << elem << " ";
    }
}
int main()
{
    vector<vector<int>> testCases = {
        {},
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 0, 1},
        {0},
        {1},
        {1, 0},
        {1, 1, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 1, 0}};

    for (auto &testCase : testCases)
    {
        sortzeroandone(testCase, testCase.size());
        printArray(testCase);
        cout << endl;
    }

    return 0;
}