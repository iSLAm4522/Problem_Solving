// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num, counter = 1;
  cin >> num;
  while (num--)
  {
    int row = 4;
    while (row--)
    {
      if (counter % 4 == 0)
        cout << "PUM";
      else
        cout << counter << ' ';
      counter++;
    }
    cout<<'\n';
  }
  return 0;
}