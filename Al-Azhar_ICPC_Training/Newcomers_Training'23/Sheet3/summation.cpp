// https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/A

// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int N;
  cin >> N;
  long long arr[N], res[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    if (i == 0)
    {
      res[i] = arr[i];
      continue;
    }
    res[i] = arr[i] + res[i - 1];
  }
  cout << abs(res[N - 1]) << endl;
  return 0;
}