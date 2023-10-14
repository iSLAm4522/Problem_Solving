#include <iostream>
#include <math.h>
using namespace std;
int main()
{ 
  int a , b , c, min_number, max_number, mid_number;
  cin>>a>>b>>c;
  max_number = max(max(a,b),c);
  min_number= min(min(a,b),c);
  mid_number=(a+b+c)- (max_number + min_number);
  if(max_number < (mid_number+min_number)){
    cout<<0<<endl;
  }
  else
  cout<<(max_number+1)-(mid_number+min_number)<<endl;
  return 0;
}
