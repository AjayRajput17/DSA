#include <iostream>
using namespace std;

void print_inc(int i, int n)
{
  if (i > n)
    return;
  cout << i << endl;
  print_inc(i + 1, n);
}

void print_dnc(int n)
{
  if (n == 0)
    return;
  cout << n << endl;
  print_dnc(n - 1);
}

int main()
{
  print_inc(1, 5);
  cout << "/n" << endl;
  print_dnc(5);
}