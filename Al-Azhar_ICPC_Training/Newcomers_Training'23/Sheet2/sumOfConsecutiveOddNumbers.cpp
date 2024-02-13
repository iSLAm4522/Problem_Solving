// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);//1
  cin.tie(0);//2
  int numberOfTestCases,num1,num2;
  cin>>numberOfTestCases;
  while(numberOfTestCases--){
    cin>>num1>>num2;
    int minNum=min(num1,num2),maxNum=max(num1,num2);
    int result = 0,temp;
    if(minNum%2==0)
      temp = minNum+1;
    else
      temp=minNum+2;

    while(temp<maxNum){
      result+=temp;
      temp+=2;
    }
    cout<<result<<endl;
  }
  return 0;
}