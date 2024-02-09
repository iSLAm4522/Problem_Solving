// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);//1
  cin.tie(0);//2
  int num;
  cin>>num;
  for(int i=1;i<=num;i++){
    if(num%i==0)
      cout<<i<<'\n';
  }
  return 0;
}