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
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
    cin>>arr[i];
  sort(arr,arr+size);
  for(int i:arr)
    cout<<i<<' ';
  cout<<endl;
  return 0;
}