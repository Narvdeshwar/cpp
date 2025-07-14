#include <bits/stdc++.h>
using namespace std;

// ! complexity : O(n log n)
int duplicate(vector<int> nums)
{
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size() - 1; i++)
  {
    if (nums[i] == nums[i + 1])
      return nums[i];
  }
}

// ! complexity : O(n)
int optimisedDuplicate(vector<int> nums)
{
  int ans = -1;
  for (int i = 0; i < nums.size(); i++)
  {
    int index = abs(nums[i]);
    cout << "current index for loop index i =" << i << " index = " << index << endl;
    if (nums[index] < 0)
    {
      ans = index;
      break;
    }
    cout << "Current nums at nums[" << index << "]=" << nums[index] << endl;
    nums[index] *= -1;
    cout << "After marking negative nums[" << index << "]=" << nums[index] << endl;
    cout << "-------------------------------------------------------------" << endl;
  }
  return ans;
}

int method3(vector<int> nums)
{
  while (nums[0] != nums[nums[0]])
  {
    swap(nums[0], nums[nums[0]]);
  }
  return nums[0];
}
int main()
{
  vector<int> nums = {1, 2, 3, 1};
  cout << method3(nums);
  for (auto &ele : nums)
  {
    cout << ele << " ";
  }
  cout << endl;
  cout << method3(nums);
}
