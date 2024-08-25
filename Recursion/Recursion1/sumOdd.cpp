#include <iostream>
using namespace std;

int sum(int i, int n)
{
  int x = 0;
  for (int j = i; j <= n; j++)
  {
    if (j % 2 != 0)
    {
      x += j;
    }
  }
  return x;
}

int sum_rec(int n, int i)
{

  if (n % 2 != 0 && n >= i)
  {
    if (n == 1)
      return 1;
    return n + sum_rec(n - 1, i);
  }
  else
  {
    if (n < i)
    {
      return 0;
    }

    sum_rec(n - 1, i);
  }
}
int main()
{
  cout << "Enter value for a and b: ";
  int a, b;
  cin >> a >> b;
  int s = sum(a, b);
  cout << "the sum of odd no from " << a << " to  " << b << " is :" << s << endl;
  cout << endl;
  int s1 = sum_rec(b, a);
  cout << "the sum of odd no from " << a << " to " << b << " is :" << s1 << endl;
}