#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int k){
  for(int i=0;i<n;i++){
    if(arr[i]==k){
      return i;
    }
  }
  return -1;
}
int main(){
  int a[10],n,k;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>k;
  int result = search(a, n, k);
    if (result != -1) {
        cout << "Element found at index " << result << "\n";
    } else {
        cout << "Element not found\n";
    }
  return 0;
}