#include <iostream>
using namespace std;

int stair(int n)
{
  if (n == 2)
    return 2; // no of ways
  if (n == 1)
    return 1; // no of ways

  return stair(n - 1) + stair(n - 2);
}

int main()
{
  cout << stair(6);
}