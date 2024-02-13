// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
bool isLucky(int num)
{
  string str = to_string(num);
  for (auto c : str)
    if (c != '4' && c != '7')
      return false;
  return true;
}
int main()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0); // 1
  cin.tie(0);              // 2
  int num1, num2;
  bool flag = false;
  cin >> num1 >> num2;
  for (int i = num1; i <= num2; i++)
  {
    if (isLucky(i))
    {
      flag = true;
      cout << i << " ";
    }
  }
  if (!flag)
    cout << -1;
  cout << endl;
  return 0;
}