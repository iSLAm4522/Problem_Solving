// https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/I

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
  int numberOfTestCases;
  cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int size;
    cin >> size;
    int arr[size];
    for (int j = 0; j < size; j++)
      cin >> arr[j];
    int min=arr[0]+arr[1]+2-1;
    for (int k = 1; k <= size; k++)
    {
      for (int s = k + 1; s <= size; s++)
      {
        if (min > (arr[k-1] + arr[s-1] + s - k))
          min = arr[k-1] + arr[s-1] + s - k;
      }
    }
    cout << min << endl;
  }
  return 0;
}