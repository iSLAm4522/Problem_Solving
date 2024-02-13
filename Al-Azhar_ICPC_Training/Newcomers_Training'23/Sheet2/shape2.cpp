// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main(){
  int num;
  cin>>num;
  for(int i = 0;i<num;i++){
    int numberOfSpaces=num-i-1;
    while(numberOfSpaces--){
      cout<<' ';
    }
    for(int j=0;j<(2*i+1);j++){
      cout<<'*';
    }
    cout<<'\n';
  }
  return 0;
}