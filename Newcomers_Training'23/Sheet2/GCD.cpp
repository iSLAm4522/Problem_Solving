// include the entire standard library, now no need to include iostream, vector and algorithm separately they are available automatically.
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);//1
  cin.tie(0);//2
  int num1,num2,greatestCommonDivisor;
  cin>>num1>>num2;
  int min = num1>num2?num2:num1;
  for(int i = 1;i<=min;i++)
  {
    if(num1%i==0 && num2 %i == 0)
      greatestCommonDivisor = i;
  }
  cout<<greatestCommonDivisor<<'\n';
  return 0;
}
