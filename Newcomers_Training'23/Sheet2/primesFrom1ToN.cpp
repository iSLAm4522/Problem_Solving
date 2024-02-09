// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}
int main(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0); // 1
  cin.tie(0);              // 2
  int num;
  cin>>num;
  string str="";
  for(int i=2;i<=num;i++)
  {
    if(isPrime(i))
      str+=to_string(i)+" ";
  }
  cout<<str<<endl;
  return 0;
}