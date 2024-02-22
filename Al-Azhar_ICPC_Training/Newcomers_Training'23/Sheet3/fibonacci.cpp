//problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/O

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int n;
  cin>>n;
  long long fib[51];
  fib[1]=0,fib[2]=1;
  for(int i=3;i<=50;i++) fib[i] = fib[i-1]+fib[i-2];
  cout<<fib[n]<<endl;
  return 0;
}