
#include <iostream>
using namespace std;
// using namespace std;
// void fab(int n)
// {
//   int a = 0;
//   cout << a << endl;
//   int b = 1;
//   cout << b << endl;
//   int count = 2;
//   int sum;
//   while (count <= n)
//   {
//     sum = a + b;
//     cout << sum << endl;
//     a = b;
//     b = sum;
//     count++;
//   }
// }
// int main()
// {
//   fab(10);
// }

// int fibo(int n)
// {
//   if (n == 1 || n == 2)
//     return 1;

//   return fibo(n - 1) + fibo(n - 2);
//   cout << n << endl;
// }

int fibo(int n)
{
  if (n == 1 || n == 2)
    return 1;

  cout << fibo(n - 1) + fibo(n - 2);
  cout << n << endl;
}

int main()
{
  // 1,1,2,3,5,8,13,21,34,55,89
  fibo(12);
}