#include <iostream>
using namespace std;
int main()
{ 
  int numberOfEmployees,numberOfways = 0;
  cin>>numberOfEmployees;
  for(int i = 1; i<numberOfEmployees;++i){
    if(numberOfEmployees % i == 0)
    numberOfways++;
  }
  cout<<numberOfways<<endl;
  return 0;
}
