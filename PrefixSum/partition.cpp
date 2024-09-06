#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  bool flag;
  // formation of prefix sum
  for (int i = 1; i < n; i++)
  {
    arr[i] += arr[i - 1];
  }
  if (arr[n - 1] % 2 != 0)
  {
    cout << "It can not partitioned....";
    return 1;
  }
  // check any partion exist
  for (int i = 0; i < n; i++)
  {
    if (2 * arr[i] == arr[n - 1])
    {
      flag = true;
      break;
    }
  }

  if (flag)
  {
    cout << "Yes it can be partition";
  }
  else
  {
    cout << "No it can't be partition";
  }
}