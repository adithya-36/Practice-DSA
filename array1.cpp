#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int>&arr){
  int max=arr[0];
  int n=arr.size();
  for(int i=1;i<n;i++){
    if(max<arr[i]){
      max=arr[i];
    }
  }
  return max;
}
int main(){
  vector<int> arr1 = {2,5,1,3,0};
  vector<int> arr2 = {8,10,5,7,9};
  cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
  cout<<"The Largest element in the array is: "<<sortArr(arr2);
  return 0;
}
/*int sortArr(vector<int>&arr){
  int n=arr.size();
  sort(arr.begin(),arr.end());
  return arr[n-1];
}
int main(){
  vector<int> arr1 = {2,5,1,3,0};
  vector<int> arr2 = {8,10,5,7,9};
  cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
  cout<<"The Largest element in the array is: "<<sortArr(arr2);
  return 0;
}*/