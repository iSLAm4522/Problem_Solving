#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int A, B, C, min_value, max_value, mid_value;
  cin >> A >> B >> C;
  max_value = max(max(A, B), C);
  min_value = min(min(A, B), C);
  if ((A <= B && A >= C) || A <= C && A >= B)
    mid_value = A;
  else if ((B <= A && B >= C) || (B >= A && B <= C))
    mid_value = B;
  else if ((C >= B && C <= A) || (C >= A && C <= B))
    mid_value = C;

  cout << min_value << '\n'
       << mid_value << '\n'
       << max_value << endl
       << '\n';

  cout << A << '\n'
       << B << '\n'
       << C << endl;
  return 0;
}