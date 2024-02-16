// CodeForces => 75A - Life Without Zeros

// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int removeZeros(int num){
  string str=to_string(num),result="";
  int length=str.size();
  for(int i=0;i<length;i++){
    if(str[i]!='0') result+=str[i];
  }
  return stoi(result);
}
int main(){
  init();
  int num1,num2,result1,num3,num4,result2;
  cin>>num1>>num2;
  result1=num1+num2;
  num3=removeZeros(num1);
  num4=removeZeros(num2);
  result2=removeZeros(result1);
  if((num3+num4)==result2)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
