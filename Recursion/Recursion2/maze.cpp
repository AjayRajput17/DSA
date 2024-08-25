#include <iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec)
{
  if (sr > er || sc > ec)
    return 0;

  if (sr == er && sc == ec)
    return 1;

  int rightWays = maze(sr, sc + 1, er, ec);
  int downWays = maze(sr + 1, sc, er, ec);
  int totalWays = rightWays + downWays;
  return totalWays;
}

void print(int sr, int sc, int er, int ec, string s)
{
  if (sr > er || sc > ec)
    return;

  if (sr == er && sc == ec)
  {
    cout << s << endl;
    return;
  }

  print(sr, sc + 1, er, ec, s + 'R'); // Move right
  print(sr + 1, sc, er, ec, s + 'D'); // Move down
}

int maze2(int row, int col)
{

  if (row < 1 || col < 1)
    return 0;
  if (row == 1 && col == 1)
    return 1;

  int rw = maze2(row, col - 1);
  int dw = maze2(row - 1, col);
  int tw = rw + dw;
  return tw;
}

void print2(int row, int col, string s)
{
  if (row < 1 || col < 1)
    return;
  if (row == 1 && col == 1)
    cout << s << endl;

  print2(row, col - 1, s + 'R'); // Move right
  print2(row - 1, col, s + 'D'); // Move down
}

int main()
{
  cout << maze2(3, 3) << endl;
  print2(3, 3, "");

  return 0;
}