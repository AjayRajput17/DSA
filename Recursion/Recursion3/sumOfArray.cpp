// Write a program to find the sum of a.. e.ements in an array using recursionC

#include <iostream>
#include <climits>
using namespace std;
int sum(int a, int b)
{
  return a + b;
}
int calSum(int arr[], int n, int idx)
{
  if (idx == n - 1)
    return arr[idx];
  return sum(arr[idx], calSum(arr, n, idx + 1));
}
int main()
{

  int arr[] = {1, 2, 33};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << calSum(arr, n, 0);
}
