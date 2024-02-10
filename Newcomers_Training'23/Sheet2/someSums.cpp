// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int someOfDigits(int num){
  int result = 0;
  while(num!=0)
  {
    result+=num%10;
    num/=10;
  }
  return result;
}
int main()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0); // 1
  cin.tie(0);              // 2
  int N, num1, num2, result = 0;
  cin >> N >> num1 >> num2;
  for (int i = 1; i <= N; i++)
  {
    if ((someOfDigits(i) >= num1 && someOfDigits(i) <= num2))
      result += i;
  }
  cout << result << endl;
  return 0;
}