#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 4, x = 3;
  int count = 0;
  int low = 0;
  int idx = -1;
  int high = arr.size() - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == x)
    {
      idx = mid;
      break;
    }
    else if (arr[mid] < x)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  cout << "\n index of x is " << idx;

  int pre = idx;
  int next = idx + 1;
  vector<int> v;
  while (count < k)
  {
    if (pre >= 0)
    {
      v.push_back(arr[pre]);
      pre--;
      count++;
    }

    if (count < k && next < arr.size())
    {
      v.push_back(arr[next]);
      next++;
      count++;
    }
  }

  cout << endl;
  // sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    cout << " " << v[i];
  }
}