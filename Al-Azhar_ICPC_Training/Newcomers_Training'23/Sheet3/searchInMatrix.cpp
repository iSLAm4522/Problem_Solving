// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/S

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int n,m,num;
  cin>>n>>m;
  int arr[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin>>arr[i][j];

  cin>>num;
  bool flag=false;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if(arr[i][j] == num){
        flag = true;
        break;
      }
    }
  }
  cout<<((flag)?"will not take number":"will take number")<<endl;
  return 0;
}