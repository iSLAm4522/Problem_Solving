#include <iostream>
#define MAX(a, b) (a >= b ? a : b)
#define MIN(a, b) (a >= b ? b : a)
using namespace std;
int main()
{
  int numberOfSoldiers, maxDiffrence, numberOfWays = 0 ;
  cin >> numberOfSoldiers >> maxDiffrence;
  int arr[numberOfSoldiers];
  for (int i = 0; i < numberOfSoldiers; ++i)
    cin >> arr[i];
  for (int j = 0; j < numberOfSoldiers; ++j)
  {
    for(int k = j+1; k<numberOfSoldiers;++k){
      if(arr[j] == arr[k] || (MAX(arr[j],arr[k])-MIN(arr[j],arr[k]))<=maxDiffrence)
      numberOfWays+=2;
    }
  }
  cout << numberOfWays << endl;
  return 0;
}
