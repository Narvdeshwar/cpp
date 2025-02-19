#include <bits/stdc++.h>
using namespace std;
// O(n) complexity
int insertAtPositionBruteForce(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target || nums[i] > target)
        {
            return i;
        }
    }
    return n;
}
// Time complexity O(n log n)
int insertAtPositionOptimise(vector<int> &nums, int target)
{
    int startIndex = 0, endIndex = nums.size() - 1;
    while (startIndex <= endIndex)
    {
        int mid = startIndex + (endIndex - startIndex) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] > target)
            endIndex = mid - 1;
        if (nums[mid] < target)
            startIndex = mid + 1;
    }
    return startIndex;
}
int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target1 = 2;
    int target2 = 5;
    int target3 = 7;
    cout << "+++++++++++++++Brute Force Approach++++++++++++++++++++++++" << endl;
    cout << insertAtPositionBruteForce(nums, target1) << endl;

    cout << insertAtPositionBruteForce(nums, target2) << endl;
    ;

    cout << insertAtPositionBruteForce(nums, target3) << endl;
    ;
    cout << "+++++++++++++++Optimise Approach++++++++++++++++++++++++" << endl;
}