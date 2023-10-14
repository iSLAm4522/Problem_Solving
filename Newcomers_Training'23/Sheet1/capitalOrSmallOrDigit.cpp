#include <iostream>
#include <string>
using namespace std;
int main()
{
  char ch;
  cin >> ch;
  if (ch >= 48 && ch <= 57)
    cout << "IS DIGIT" << endl;
  else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
  {
    cout << "ALPHA" << endl;
    if ((ch >= 65 && ch <= 90))
      cout << "IS CAPITAL" << endl;
    else
      cout << "IS SMALL" << endl;
  }
  return 0;
}