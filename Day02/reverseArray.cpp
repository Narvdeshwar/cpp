#include <bits/stdc++.h>
using namespace std;
using namespace chrono; // For measuring execution time

void reverseArray(vector<int> &arr, int size)
{
    int startIndex = 0, endIndex = size - 1;
    while (startIndex < endIndex)
        swap(arr[startIndex++], arr[endIndex--]);
}

void printArray(vector<int> &arr)
{
    for (auto &elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;
}

void runTest(vector<int> &arr, const string &testName)
{
    cout << testName << ": ";

    auto start = high_resolution_clock::now();
    reverseArray(arr, arr.size());
    auto end = high_resolution_clock::now();

    printArray(arr);
    auto duration = duration_cast<nanoseconds>(end - start);
    cout << "Execution Time: " << duration.count() << " nanoseconds" << endl;
    cout << "----------------------------------------------------\n";
}

int main()
{
    // Test Case 1: General case
    vector<int> arr1 = {2, 3, 4, 5, 1, 6, 7};
    runTest(arr1, "Test Case 1 (General case)");

    // Test Case 2: Empty array
    vector<int> arr2 = {};
    runTest(arr2, "Test Case 2 (Empty array)");

    // Test Case 3: Single element
    vector<int> arr3 = {5};
    runTest(arr3, "Test Case 3 (Single element)");

    // Test Case 4: Two elements
    vector<int> arr4 = {1, 2};
    runTest(arr4, "Test Case 4 (Two elements)");

    // Test Case 5: Odd number of elements
    vector<int> arr5 = {1, 2, 3, 4, 5};
    runTest(arr5, "Test Case 5 (Odd number of elements)");

    // Test Case 6: Even number of elements
    vector<int> arr6 = {10, 20, 30, 40};
    runTest(arr6, "Test Case 6 (Even number of elements)");

    // Test Case 7: Already reversed array
    vector<int> arr7 = {5, 4, 3, 2, 1};
    runTest(arr7, "Test Case 7 (Already reversed array)");

    // Test Case 8: Array with repeated elements
    vector<int> arr8 = {7, 7, 7, 7, 7};
    runTest(arr8, "Test Case 8 (Repeated elements)");

    // Test Case 9: Array with negative numbers
    vector<int> arr9 = {-1, -2, -3, -4, -5};
    runTest(arr9, "Test Case 9 (Negative numbers)");

    // Test Case 10: Large array (1 million elements - Stress test)
    vector<int> arr10(1000000);
    iota(arr10.begin(), arr10.end(), 1); // Filling with values 1 to 1,000,000
    cout << "Test Case 10 (Large array - First 10 elements before reversing): ";
    for (int i = 0; i < 10; i++)
        cout << arr10[i] << " ";
    cout << endl;

    auto start = high_resolution_clock::now();
    reverseArray(arr10, arr10.size());
    auto end = high_resolution_clock::now();

    cout << "Test Case 10 (Large array - First 10 elements after reversing): ";
    for (int i = 0; i < 10; i++)
        cout << arr10[i] << " ";
    cout << endl;

    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Execution Time for 1M elements: " << duration.count() << " ms" << endl;
    cout << "----------------------------------------------------\n";

    return 0;
}
// this program takes O(n/2) =O(n)