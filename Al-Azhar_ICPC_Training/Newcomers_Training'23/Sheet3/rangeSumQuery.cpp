// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/Y

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int n,q;
  cin>>n>>q;
  long long  arr1[n+1];int arr2[q][2];
  arr1[0]=0;
  for (int i = 1;i <= n;i++)cin>>arr1[i];
  for (int i = 0;i < q;i++)cin>>arr2[i][0]>>arr2[i][1];

  for (int i = 2;i <= n;i++)
    arr1[i]=arr1[i-1]+arr1[i];

  for (int i = 0;i < q;i++){
    cout<<(arr1[arr2[i][1]]-arr1[arr2[i][0]-1])<<'\n';
  }
  return 0;
}