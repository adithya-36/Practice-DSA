#include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int pos){
  int temp=arr[0];
  for(int i=pos+1;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  arr[n-1]=temp;
}
int main(){
  int n=5;
  int a[5]={1,2,3,4,5};
  leftRotate(a,n);
  cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
  cout << endl;
  return 0;
}