#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
    void printArray(vector<int> &nums)
    {
        for (auto num : nums)
        {
            cout << num << " ";
        }
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {3,3};
    int target = 6;
    vector<int> ans = sol.twoSum(arr, target);
    sol.printArray(ans);
}