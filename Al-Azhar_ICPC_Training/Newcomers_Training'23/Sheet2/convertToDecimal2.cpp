// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
string decimalToBinary(int num){
  string str = "";
  while (num != 0)
  {
    str += to_string(num % 2);
    num /= 2;
  }
  reverse(str.begin(), str.end());
  return str;
}
int countOnes(string str)
{
  int counter = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '1')
      counter++;
  }
  return counter;
}
int main(){
  int numberOfTestCases, num;
  cin >> numberOfTestCases;
  while (numberOfTestCases--)
  {
    cin >> num;
    string binaryRepresentation = decimalToBinary(num);
    int numberOfOnes = countOnes(binaryRepresentation);
    int result=0;
    for (int i = 0; i < numberOfOnes; i++)
    {
      result += pow(2, i);
    }
    cout << result << endl;
  }
  return 0;
}