// https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/E

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
  int N,min,index;
  cin>>N;
  int arr[N];
  for (int  i = 0; i < N; i++)
  {
    cin>>arr[i];
    if(i==0){
      min=arr[i];
      index=i;
      continue;
    }
    if(min>arr[i]){
      min=arr[i];
      index=i;
    }
  }
  cout<<min<<" "<<index+1<<endl;
  
  return 0;
}