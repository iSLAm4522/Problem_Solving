// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
#include <string>
using namespace std;
bool ispalindrome(string str)
{ 
  bool ispalindrom = true;
  int len = str.length();
  for (int i = 0; i < (len / 2); i++)
  {
    if (str[i] != str[len - i - 1])
    {
      ispalindrom = false;
      break;
    }
  }
  return ispalindrom;
}
string removeLeadingZeros(string str){
    //this function is  used to remove leading zeros from the string after reverse it.
  reverse(str.begin(),str.end());
  string reversed;
  for(int i=0;i<str.length();i++)
  {
    if(str[i]!='0')
    {
      reversed=str.substr(i);
      break;
    }
  }
  return reversed;
}
int main()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0); // 1
  cin.tie(0);              // 2
  int num;
  cin >> num;
  string str = to_string(num);
  cout<<removeLeadingZeros(str)<<endl;
  if(ispalindrome(str))
    cout<<"YES"<<'\n';
  else
    cout<<"NO"<<'\n';
  return 0;
}