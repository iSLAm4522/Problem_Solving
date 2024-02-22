// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/V

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int freqArr[100001];
int main(){
  init();
  int n,m;
  cin>>n>>m;
  int arr[n];
  for (int i = 0;i <n;i++) {
    cin>>arr[i];
    freqArr[arr[i]]++;
  }
  for (int i = 1; i <= m; i++)
    cout<<freqArr[i]<<'\n';
  return 0;
}