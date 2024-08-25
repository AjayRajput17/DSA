#include <iostream>
#include <string>
#include <vector>

using namespace std;

void permutations(vector<string> &v, string ans, string original)
{
  if (original == "")
  {
    v.push_back(ans); // Store the permutation
  }
  for (int i = 0; i < original.length(); i++)
  {
    char ch = original[i];
    string left = original.substr(0, i);
    string right = original.substr(i + 1);
    permutations(v, ans + ch, left + right);
  }
}

int main()
{
  string str = "123";
  vector<string> v;
  permutations(v, "", str);

  // Print all permutations
  for (const string &perm : v)
  {
    cout << perm << endl;
  }

  return 0;
}
