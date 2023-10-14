#include <iostream>
#include <iomanip>
#define PI 3.141592653
using namespace std;
int main()
{
double R;
cin>>R;
cout<<fixed <<setprecision(9)<<PI*R*R<<endl;
return 0;
}