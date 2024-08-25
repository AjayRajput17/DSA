#include <iostream>
using namespace std;

int cal(int n, int x)
{
  if (n < 10)
    return x + n;
  x += (n % 10);
  cal(n / 10, x);
}

int sum(int n)
{
  if (n == 0)
    return 0;
  return n % 10 + sum(n / 10);
}
int main()
{
  // int res = cal(5, 0);
  // cout << res;

  // cout << 5 / 10;
  cout << sum(1234);
}