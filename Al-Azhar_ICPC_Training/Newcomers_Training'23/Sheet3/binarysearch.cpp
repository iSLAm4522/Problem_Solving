// problem : https://codeforces.com/group/Bu2yXAqHyK/contest/470138/problem/Z

#include <bits/stdc++.h>
using namespace std;
void init(){
  ios::sync_with_stdio(0);
  cin.tie(0);
}
bool isFound(int arr[],int size,int num){
    int low = 0,high=size-1,mid = low +(high-low)/2;
    if(num==arr[mid]){
      return true;
    }
    while (low<=high){
      if(num<arr[mid]){
        high=mid-1;
        mid=low +(high-low)/2;
        if(num==arr[mid]){
          return true;
        }
      }
      else{
        low=mid+1;
        mid=low +(high-low)/2;
        if(num==arr[mid]){
          return true;
        }
      }
    }

    return false;
}
int main(){
  init();
  int n,q;
  cin>>n>>q;
  int arr[n];
  for (int i = 0; i < n; ++i)
    cin>>arr[i];
  
  sort(arr,arr+n);
  for (int i = 0; i < q; i++){
    int num;
    cin>>num;
    if(isFound(arr,n,num)){
      cout<<"found"<<endl;
    }
    else
      cout<<"not found"<<endl;
  }
  return 0;
}