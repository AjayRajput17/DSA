#include <iostream>
using namespace std;

int strair(int n)
{
  if (n == 1)
    return 1;
  if (n == 2)
    return 2;
  if (n == 3)
    return 4;

  return strair(n - 1) + strair(n - 2) + strair(n - 3);
}

int main()
{
  int n;
  cout << "Enter n :";
  cin >> n;
  cout << strair(n);
}