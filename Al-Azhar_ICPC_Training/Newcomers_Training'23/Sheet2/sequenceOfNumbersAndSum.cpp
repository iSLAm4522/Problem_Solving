// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);//1
  cin.tie(0);//2
  int num1,num2;
  while(true){
    cin>>num1>>num2;
    if(num1<=0||num2<=0) break;
    int sum=0;
    for(int i=min(num1,num2);i<=max(num1,num2);i++){
      cout<<i<<' ';
      sum+=i;
    }
    cout<<"sum ="<<sum<<'\n';
  }
  return 0;
}