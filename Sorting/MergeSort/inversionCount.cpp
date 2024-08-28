#include <iostream>
#include <vector>
using namespace std;

void inversion(vector<int> &a, vector<int> &b, int &count)
{
  int i = 0;
  int j = 0;

  while (i < a.size() && j < b.size())
  {
    if (a[i] > b[j])
    {
      count += (a.size() - i);
      j++;
    }
    else
    {
      i++;
    }
  }
}

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
  int i = 0; // a
  int j = 0; // b
  int k = 0; // res
  while (i < a.size() && j < b.size())
  {
    if (a[i] < b[j])
      res[k++] = a[i++];
    else
      res[k++] = b[j++];
  }
  while (i < a.size())
    res[k++] = a[i++];
  while (j < b.size())
    res[k++] = b[j++];
}

void mergeSort(vector<int> &v, int &count)
{
  int n = v.size();
  if (n == 1)
    return;

  int n1 = n / 2;
  int n2 = n - n / 2;

  vector<int> a(n1);
  vector<int> b(n2);

  for (int i = 0; i < n; i++)
  {
    if (i < n1)
      a[i] = v[i];
    else
      b[i - n1] = v[i];
  }

  mergeSort(a, count);
  mergeSort(b, count);

  inversion(a, b, count);
  merge(a, b, v);

  a.clear();
  b.clear();
}

int main()
{
  int arr[] = {5, 1, 3, 0, 4, 9, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> v(arr, arr + n);

  cout << "Original array: ";
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  int count = 0;
  mergeSort(v, count);

  cout << "Sorted array: ";
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  cout << "Inversion count: " << count << endl;

  return 0;
}
