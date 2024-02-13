// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int K,S,counter=0;
  cin>>K>>S;
  for(int x=0;x<=K;x++)
  {
    for (int y = 0; y <= K; y++)
    {
      if(((S-x-y)>=0)&&((S-x-y)<=K))
        counter++;
    }
  }
  cout<<counter<<endl;
  return 0;
}