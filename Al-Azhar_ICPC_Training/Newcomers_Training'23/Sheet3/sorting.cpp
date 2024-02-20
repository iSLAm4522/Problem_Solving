// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
int main(){
  init();
  int N;
  cin>>N;
  int arr[N];
  for (int i = 0; i < N; i++)
    cin>>arr[i];

  for (int i = 0; i < N; i++)
  {
    int min = arr[i];
    int index = i;
    for (int j = i + 1; j <= (N - 1); j++)
    {
      if (min > arr[j])
      {
        min = arr[j];
        index = j;
      }
    }
    if (min < arr[i])
    {
      int temp = arr[i];
      arr[i] = min;
      arr[index] = temp;
    }
  }
  for (int i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}