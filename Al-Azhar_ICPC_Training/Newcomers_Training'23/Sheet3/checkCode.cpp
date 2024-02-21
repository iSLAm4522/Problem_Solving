// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/N

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
inline bool isDigit(char c) { return c >= '0' && c <= '9'; }
int main(){
  init();
  int a, b;
  cin >> a >> b;
  string str;
  cin >> str;
  if (str[a] == '-'){
    for (int i = 0; i < str.size(); i++)
    {
      if (i == a)
        continue;
      if (!isDigit(str[i]))
      {
        cout << "No" << endl;
        return 0;
      }
    }
    cout << "Yes" << endl;
  }
  else
    cout << "No" << endl;

  return 0;
}