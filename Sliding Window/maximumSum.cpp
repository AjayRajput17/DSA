#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
  int n = 9;
  int k = 3;

  int maxsum = INT16_MIN;
  for (int i = 0; i <= n - k; i++)
  {
    int sum = arr[i] + arr[i + 1] + arr[i + 2];
    maxsum = max(sum, maxsum);
  }

  cout << maxsum;
}
