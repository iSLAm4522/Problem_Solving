// https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/K

#include <bits/stdc++.h>
using namespace std;
void init(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int n;
  cin>>n;
  int sum=0;
  char arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
    sum+=(int(arr[i]-48));
  }
  cout<<sum<<endl;
  return 0;
}