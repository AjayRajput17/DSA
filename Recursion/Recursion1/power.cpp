#include <iostream>
using namespace std;

bool check(int n)
{
  if (n == 2 || n==1)
    return true;
  else if (n < 2 || n % 2 != 0)
    return false;
  int m = n / 2;
  check(m);
}

int main()
{
  bool x = check(132);
  cout << x;
}