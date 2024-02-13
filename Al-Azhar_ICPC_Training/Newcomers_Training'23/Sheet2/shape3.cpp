// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num;
  cin>>num;
  for (int i = 0; i < num; i++)
  {
    int spaces=num-i-1, stars=2*i+1;
    while(spaces--)
      cout<<' ';
    while(stars--)
      cout<<'*';
    cout<<'\n';
  }
  for (int i = 0; i < num; i++)
  {
    int spaces=i, stars=num*2-i*2-1;
    while(spaces--)
      cout<<' ';
    while(stars--)
      cout<<'*';
    cout<<'\n';
  }
  return 0;
}