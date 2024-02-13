#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int numberOfElements, numberOfOrderedPairs = 0, min, max;
  cin >> numberOfElements;
  int arr[numberOfElements];
  for (int i = 0; i < numberOfElements; ++i)
    cin >> arr[i];

  min = max = arr[0];
  for (int i = 1; i < numberOfElements; ++i)
  {
    max = arr[i] > max ? arr[i] : max;
    min = arr[i] < min ? arr[i] : min;
  }
  sort(arr, arr + numberOfElements);
  for (int i = 0, j = numberOfElements - 1; i < j;)
  {
    if (arr[i] + arr[j] == (min + max))
    {
      numberOfOrderedPairs++;
      i++;
      j--;
    }
    else if (arr[i] + arr[j] < (min + max))
      i++;
    else if (arr[i] + arr[j] > (min + max))
      j--;
  }

  cout << numberOfOrderedPairs << endl;
  return 0;
}