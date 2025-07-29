#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> nums, int target)
{
  int start = 0, end = nums.size() - 1;
  while (start <= end)
  {
    int mid = start - (end - start) / 2;
    
  }
}
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 9;
  int ans = binarySearch(nums, target);
  if (ans > 0)
  {
    cout << "Item found at index: " << ans << endl;
  }
  else
  {
    cout << "Item is not present" << endl;
  }
}