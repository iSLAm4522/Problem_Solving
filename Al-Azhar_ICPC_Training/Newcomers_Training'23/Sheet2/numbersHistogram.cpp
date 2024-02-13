// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);//1
  cin.tie(0);//2
  char ch;
  cin>>ch;
  int N,num;
  cin>>N;
  for (int i = 0; i < N; i++)
  {
    cin>>num;
    for (int j = 0; j < num; j++)
    {
      cout<<ch;
    }
    cout<<'\n';
  }
  return 0;
}