#include <iostream>
#include <array>
#define MAX(a, b) (a >= b ? a : b)
#define MIN(a, b) (a >= b ? b : a)
using namespace std;
int main()
{
  int numberOfElements, maxElement, minElement, counter=0;
  cin>>numberOfElements;
  int  arr[numberOfElements];
  for(int i = 0;i<numberOfElements;++i)
  cin >>arr[i] ;
  
  maxElement=minElement=arr[0];
  for(int i = 1;i<numberOfElements;++i){
    maxElement=MAX(maxElement , arr[i]);
    minElement=MIN(minElement,arr[i]);
  }

  for(int i =0;i<numberOfElements;++i){
    for(int j = i +1;j<numberOfElements;++j){
      if (arr[i]+arr[j] == (maxElement+minElement))
      counter++;
    }
  }
  cout<<counter<<endl;
  return 0;
}
