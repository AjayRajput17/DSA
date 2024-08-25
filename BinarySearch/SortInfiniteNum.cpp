// You have a sorted array of infinite numbers, how would you search an element in the array?

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 4, 7, 10, 12, 15, 18};
  int tgt = 10;
  int low = 0;
  int high = 1;

  while (arr[high] < tgt)
  {
    low = high;
    high *= 2;
  }
  cout << low << " " << high << endl;

  bool flag = false;
  int mid;
  while (low <= high)
  {
    mid = low + (high - low) / 2;

    if (arr[mid] == tgt)
    {
      flag = true;
      break;
    }
    else if (arr[mid] > tgt)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  if (flag == true)
  {
    cout << "Element is present at " << mid;
  }
  else
  {
    cout << "Element is not present";
  }
}