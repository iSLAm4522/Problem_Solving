// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/T

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int n,main=0,sec=0;
  cin>>n;
  int arr[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin>>arr[i][j];

  for (int i = 0; i < n; i++){
    main+=arr[i][i];
    sec+=arr[i][n-i-1];
  }

  cout<<abs(main-sec)<<endl;
  return 0;
}