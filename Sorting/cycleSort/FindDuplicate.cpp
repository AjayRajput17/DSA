#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> nums = {1, 3, 4, 2, 2};

  int n = nums.size();

  int actualSum = (n * (n - 1) / 2);
  cout << actualSum << endl;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += nums[i];
  }
  cout << sum << endl;
  cout << sum - actualSum;
}
