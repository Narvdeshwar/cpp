#include <bits/stdc++.h>
using namespace std;

// ✅ Brute force approach - O(n^2)
void keyValuePair(vector<int> &arr, int target)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Key value pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                return;  // ✅ Exit after finding a pair
            }
        }
    }
    cout << "Key value pair not found" << endl;
}

// ✅ Optimized approach when the array is NOT sorted - O(n)
void forNotSortedArrayKeyValuePair(vector<int> &arr, int target)
{
    unordered_set<int> seenNumbers;
    for (auto num : arr)
    {
        if (seenNumbers.count(target - num))
        {
            cout << "Key value pair found: (" << num << ", " << target - num << ")" << endl;
            return;
        }
        seenNumbers.insert(num);
    }
    cout << "Key value pair not found" << endl;
}

// ✅ Two-pointer approach when the array is sorted - O(n)
void whenArrayIsSorted(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());  // ⚠️ Sorting may be unnecessary if input is already sorted

    int leftIndex = 0, rightIndex = arr.size() - 1;
    while (leftIndex < rightIndex)
    {
        int sum = arr[leftIndex] + arr[rightIndex];
        if (sum == target)
        {
            cout << "Key value pair found: (" << arr[leftIndex] << ", " << arr[rightIndex] << ")" << endl;
            return;
        }
        else if (sum < target)
            leftIndex++;
        else
            rightIndex--;
    }
    cout << "Key value pair not found" << endl;
}

int main()
{
    vector<int> arr = {1, 4, 2, 7, 8, 9, 10, 5};
    int target = 50;

    cout << "\n🔹 Brute Force Approach:" << endl;
    keyValuePair(arr, target);

    cout << "\n🔹 Optimized Approach (Unsorted Array):" << endl;
    forNotSortedArrayKeyValuePair(arr, target);

    cout << "\n🔹 Two-pointer Approach (Sorted Array):" << endl;
    whenArrayIsSorted(arr, target);

    return 0;
}
