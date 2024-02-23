// problem : 

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
  int arr[n][m];
  for (int  i = 0; i < n; i++)
    for (int  j = 0; j < m; j++)
      cin>>arr[i][j];
  
    for (int  i = 0; i < n; i++)
    {
      for (int  j = m-1; j>= 0; j--)
        cout<<arr[i][j]<<" ";
      cout<<endl;
    }
  return 0;
}