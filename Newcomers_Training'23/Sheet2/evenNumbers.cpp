// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num;
  cin>>num;
  if(num==1)
  {
    cout<<-1<<'\n';
    return 0;
  }
  for(int i = 2;i<=num;i+=2)
    cout<<i<<'\n';

  return 0;
}