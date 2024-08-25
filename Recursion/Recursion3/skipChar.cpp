#include <iostream>
#include <climits>
#include <string>
using namespace std;

//  void remove(string ans, string original)
// {
//   if (original.length() == 0)
//   {
//     cout << ans;
//     return;
//   }
//   char ch = original[0];
//   if (ch == 'a')
//     remove(ans, original.substr(1));
//   else
//     remove(ans + ch, original.substr(1));
// }

void remove(string ans, string original, int idx)
{
  if (idx == original.length())
  {
    cout << ans;
    return;
  }
  char ch = original[idx];
  if (ch == 'a')
    remove(ans, original, idx + 1);
  else
    remove(ans + ch, original, idx + 1);
}
int main()
{
  string str = "Raghav Garg";
  string s = "";
  // for (int i = 0; i < str.length(); i++)
  // {
  //   if (str[i] != 'a')
  //     s += str[i];
  //   }
  // cout << s;

  remove(s, str, 0);
}