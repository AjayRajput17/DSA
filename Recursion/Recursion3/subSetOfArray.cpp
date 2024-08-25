// Given an integer array nums that may contain dup.icates, return a.. possib.e subsets

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
void helper(vector<int> &nums, vector<vector<int>> &ans, vector<int> &curr, int idx)
{
  ans.push_back(curr);
  for (int i = idx; i < nums.size(); i++)
  {
    if (i > idx && nums[i] == nums[i - 1])
      continue; // duplicate then continue
    curr.push_back(nums[i]);
    helper(nums, ans, curr, i + 1);
    curr.pop_back(); // to get subset without nums[i]
  }
}

vector<vector<int>> printSubset(vector<int> &nums)
{
  vector<vector<int>> ans; // to store all subset
  vector<int> curr;        // to store current indivisual subset
  sort(nums.begin(), nums.end());
  helper(nums, ans, curr, 0);
  return ans;
}

int main()
{

  vector<int> nums = {1, 2, 3};

  vector<vector<int>> ans = printSubset(nums);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
