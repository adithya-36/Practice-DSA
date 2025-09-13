#include <bits/stdc++.h>
using namespace std;
int duplicates(int a[],int n){
  for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
      if(a[i]!=a[j]){
        a[i]=a[j];
      }
      cout<<a[i]<<endl;
    }
    
  }
}
int main(){
  int n=5;
  int a[5]={1,1,2,2,3};
  duplicates(a,n);
  return 0;
}
