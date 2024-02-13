// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main()
{// these two lines make input and output more efficient.
  ios::sync_with_stdio(0);//1
  cin.tie(0);//2
  int N,num,max;
  cin>>N;
  int i = 0;
  while(i<N){
    cin>>num;
    if(i==0)
      max = num;
    if(num>max)
      max=num;
    i++;
  }
  cout<<max<<'\n';
  return 0;
}