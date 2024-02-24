// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470146/problem/A

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  long long n,ans;
  cin>>n;
  if (n%2==0)
    ans=n/2;
  else{
    ans=-(n+1)/2;
  }
  cout<<ans<<endl;
  return 0;
}