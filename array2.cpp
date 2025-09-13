#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter n";
  cin>>n;
  cout<<""
  bool isSorted=true;
  for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
      isSorted = false;
      break;
    }
  }
  if(isSorted){
    cout<<"array sorted"<<endl;
  }
  else{
    cout<<"array not sorted"<<endl;
  }
  
  return 0;
}