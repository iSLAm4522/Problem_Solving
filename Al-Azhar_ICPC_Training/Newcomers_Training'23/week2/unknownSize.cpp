// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  init();
  int num, counter = 0;
  vector<int> divisors;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      counter++;
      divisors.push_back(i);
    }
  }
  cout << counter << '\n';
  for (auto x : divisors)
    cout << x << ' ';
  cout << endl;
  return 0;
}