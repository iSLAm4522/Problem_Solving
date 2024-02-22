// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/U

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int n,m;
  cin>>n>>m;
  int arr[n],subArr[m];
  for (int i = 0; i <n; i++)
    cin>>arr[i];
  for (int i = 0; i <m; i++)
    cin>>subArr[i];

  int lastIndex=-1;
  bool isSub;
  for (int i = 0; i <m; i++){
    bool flag;
    for (int j = 0; j < n; j++)
    {
      if((subArr[i]==arr[j])&&(j>lastIndex)){
        lastIndex=j;
        flag=true;
        break;
      }
      else{
        flag=false;
      }
    }
    if(flag){
      isSub=true;
    }else{
      isSub=false;
      break;
    }
  }
  cout<<((isSub)?"YES":"NO")<<endl;
  return 0;
}