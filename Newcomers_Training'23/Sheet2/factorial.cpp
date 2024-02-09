// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
long long factorial(long long num){
  if(num == 0) return 1;
  return num * factorial(num - 1);
}
int main(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);//1
  cin.tie(0);//2
  int N;
  long long num;
  cin>>N;
  while(N--)
  {
    cin>>num;
    cout<<factorial(num)<<endl;
  }
  return 0;
}