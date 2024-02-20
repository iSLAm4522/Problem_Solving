// https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/M

// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
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
  int arr[n];
  for (int i = 0; i < n; i++)
    cin>>arr[i];

  int min=arr[0],max=arr[0],indexOfMin=0,indexOfMax=0;
  for (int j = 1; j < n; j++){
    if(arr[j]<min){
      min=arr[j];
      indexOfMin=j;
    }
    if(arr[j]>max) {
      max=arr[j];
      indexOfMax=j;
    }
  }
  arr[indexOfMax]=min;
  arr[indexOfMin]=max;

  for (int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}