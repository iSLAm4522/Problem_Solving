// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/X

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int n, m, row, column;
  cin >> n >> m;
  char arr[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  cin >> row >> column;
  row = row - 1, column = column - 1;
  if((arr[row-1][column-1]!='.')&&(arr[row-1][column]!='.')&&(arr[row-1][column+1]!='.')&&
      (arr[row][column-1]!='.')&&(arr[row][column+1]!='.')&&(arr[row+1][column-1]!='.')&&(arr[row+1][column]!='.')&&(arr[row+1][column+1]!='.')){
        cout<<"yes"<<endl;
      }
  else{
    cout<<"no"<<endl;
  }
  return 0;
}