// https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/G

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
  int N;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; ++i)
    cin >> arr[i];

  bool flag=true;
  for (int i = 0, j = N - 1; i<(N / 2); i++, j--)
  {
    if (arr[i] != arr[j])
    {
      flag=false;
      break;
    }
  }
  cout << ((flag)? "YES" : "NO")<<endl;
  return 0;
}