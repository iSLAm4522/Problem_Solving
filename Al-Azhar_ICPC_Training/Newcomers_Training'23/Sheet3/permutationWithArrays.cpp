// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/R

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
  int arr1[n],arr2[n];
  for (int i = 0; i < n; ++i) 
    cin>>arr1[i];
  for (int i = 0; i < n; ++i) 
    cin>>arr2[i];

  sort(arr1,arr1+n);
  sort(arr2,arr2+n);

  bool flag = true;
  for (int i = 0; i < n; i++)
  {
    if(arr1[i]!=arr2[i]){
      flag=false;
      break;
    }
  }
  cout<<((flag)?"yes":"no")<<endl;
  return 0;
}