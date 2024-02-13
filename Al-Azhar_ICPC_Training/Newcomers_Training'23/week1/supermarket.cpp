#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{ 
  
  cout<<fixed<<setprecision(8);
  int numberOfSupermarkets, numberOfKilos, yaun , kilo;
  double  minimumCost , result ;
  cin>>numberOfSupermarkets>>numberOfKilos;
  for(int i=0 ; i<numberOfSupermarkets;++i){
    cin >>yaun>>kilo;
    result = (double)numberOfKilos * yaun / kilo;
    if (i == 0)
      minimumCost =result;  
    if ((minimumCost > result))
    minimumCost = result;
  }
  cout << minimumCost<<endl;
  return 0;
}
