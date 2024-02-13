#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin>>ch;
  if(ch >= 97 && ch <= 122){
    cout<<char(ch-32)<<endl;
  }
  else
    cout<<char(ch + 32)<<endl;
  return 0;
}