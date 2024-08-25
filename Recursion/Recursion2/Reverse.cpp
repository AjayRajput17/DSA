#include <iostream>
using namespace std;

int reverse(int x, int r)
{
  if (x == 0)
    return r;
  int rem = x % 10;
  r = (r * 10) + rem;
  return reverse(x / 10, r);
}

int main()
{
  int x = 534;
  cout << x << endl;
  int res = reverse(x, 0);
  cout << res;
}