// https://codeforces.com/contest/1926/problem/C

// include the entire standard library, now no need to include iostream, vector and algorithm..etc separately they are available automatically.
#include <bits/stdc++.h>
using namespace std;
void init(){
  // these two lines make input and output more efficient.
  ios::sync_with_stdio(0);
  cin.tie(0);
}
inline int sumOfDigits(int num){
  int sum = 0;
  while (num != 0)
  {
    sum += (num % 10);
    num /= 10;
  }
  return sum;
}
int arr[200000];
int main(){
  init();
  for (int i = 1; i <= 200000; i++)
    arr[i] = arr[i - 1] + sumOfDigits(i);

  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    int num;
    cin >> num;
    cout<<arr[num]<<endl;
  }
  return 0;
}