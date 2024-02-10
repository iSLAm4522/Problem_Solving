// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0); // 1
  cin.tie(0);              // 2
  int numberOfTestCases, num;
  cin >> numberOfTestCases;
  while (numberOfTestCases--)
  {
    cin >> num;
    string str = to_string(num);
    reverse(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
      cout << str[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}