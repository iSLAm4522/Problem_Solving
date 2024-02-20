// https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/L

// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
inline int maxInRange(int arr[], int first, int last){
  int max = arr[first];
  for(int i=first+1;i<=last;i++){
    if(arr[i] > max)max = arr[i];
  }
  return max;
}
int main(){
  init();
  int numberOfTestCases;
  cin>>numberOfTestCases;
  while (numberOfTestCases--)
  {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin>>arr[i];
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
      for (int j = i+1; j < n; j++)
      {
        cout<<maxInRange(arr,i,j)<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}