#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
  float num;
  cin>>num;
  int X= floor(num);
  if(X== num)
  cout<<"int"<<' '<<X<<endl;
  else
  cout<<"float"<<' '<<X<<' '<<fixed<<setprecision(3)<<(num - X)<<endl;
  return 0;
}