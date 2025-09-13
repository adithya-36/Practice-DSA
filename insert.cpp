#include <iostream>
using namespace std;
int main(){
  int a[10],n,pos,i;
  cout<<"Enter the number of elements: ";
  cin>>n;
  cout<<"Enter the elements: ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Enter the element to insert: ";
  int key;
  cin>>key;
  cout<<"Enter the pos to insert :";
  cin>>pos;
  for(i=n;i>pos;i--){
    a[i]=a[i-1];
  }
  a[pos]=key;
  n++;
  for(i=0;i<n;i++){
    cout<<a[i];
  }
  return 0;
}