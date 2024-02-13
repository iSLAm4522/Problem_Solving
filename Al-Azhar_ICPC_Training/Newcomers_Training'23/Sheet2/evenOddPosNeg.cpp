// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, even = 0, odd = 0, pos = 0, neg = 0, num;
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> num;
    if (num % 2 == 0)
      even++;
    else
      odd++;
    if (num > 0)
      pos++;
    else if (num < 0)
      neg++;
  }
  cout << "Even: " << even << '\n';
  cout << "Odd: " << odd << '\n';
  cout << "Positive: " << pos << '\n';
  cout << "Negative: " << neg << '\n';
  return 0;
}