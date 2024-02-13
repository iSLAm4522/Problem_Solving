#include <iostream>
#include <math.h>
using namespace std;
int main()
{
double A , B;
cin>>A>>B;
cout<<"floor "<<A<<" / "<<B<<" = "<<floor(A/B)<<endl;
cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil(A/B)<<endl;
cout<<"round "<<A<<" / "<<B<<" = "<<round(A/B)<<endl;
return 0;
}