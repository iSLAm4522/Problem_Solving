// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/P

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
  int arr[n];
  for (int i = 0; i < n; i++)
    cin>>arr[i];

  int counter=0;
  bool flag=true;
  while (flag)
  {
    for (int i = 0; i < n; i++){
      if(arr[i]%2==0){
        arr[i]=arr[i]/2;
      }
      else{
        flag=false;
        break;
      }
    }
    flag?counter++:counter;
  }
  cout<<counter<<endl;
  return 0;
}