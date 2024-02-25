// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470146/problem/C

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  long long n,k,mid;
  cin>>n>>k;
  mid=(n+1)/2;
  if(k<=mid)cout<<(k*2)-1<<endl;
  else cout<<(k-mid)*2<<endl;
  return 0;
}