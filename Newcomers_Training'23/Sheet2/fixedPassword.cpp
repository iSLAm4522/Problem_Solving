// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main()
{// these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num;
  const int fixedPass=1999;
  while(cin>>num){
    if(num==fixedPass)
    {
      cout<<"Correct"<<'\n';
      break;
    }
    else
      cout<<"Wrong"<<'\n';
  }
  return 0;
}