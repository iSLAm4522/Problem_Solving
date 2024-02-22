// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/Q

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin>>arr[i];
    int counter = n;
    for (int i = 0; i <(n-1); i++){
      int temp = arr[i];
      for (int j = i+1;j<n; j++)
      {
        if(temp<=arr[j]){
          counter++;
          temp=arr[j];
        }
        else{
          break;
        }
      }
    }
    cout<<counter<<endl;
  }
  return 0;
}