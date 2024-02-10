// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main(){
  int num,first=0,second=1;
  cin>>num;
  if(num<1)
    return 0;
  cout<<first<<' ';
  for(int i=1;i<num;i++){
    cout<<second<<' ';
    int temp = first + second;
    first = second;
    second = temp;
  }
  cout<<endl;
  return 0;
}
