// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init()
{
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  init();
  int strength, numberOfDragons;
  bool flag = true;
  vector<pair<int, int>> dragonAttributes;
  cin >> strength >> numberOfDragons;
  for (int i = 0; i < numberOfDragons; i++)
  {
    int dragonStrength, bonus;
    cin >> dragonStrength >> bonus;
    dragonAttributes.push_back(make_pair(dragonStrength, bonus));
  }
  sort(dragonAttributes.begin(), dragonAttributes.end());
  for (int i = 0; i < numberOfDragons; i++)
  {
    if (strength > dragonAttributes[i].first)
    {
      strength += dragonAttributes[i].second;
    }
    else
    {
      flag = false;
      break;
    }
  }
  cout << (flag ? "YES" : "NO") << endl;
  return 0;
}