#include <iostream>
using namespace std;
int main()
{
long long A,B,C,D , mult;
cin>>A>>B>>C>>D;
mult = (A%100*B%100*C%100*D%100) % 100;
if (mult>10)
cout << mult<<endl;
else{
  cout<<'0'<<mult<<endl;
}
  return 0;
}