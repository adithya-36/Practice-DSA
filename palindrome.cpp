#include <iostream>
using namespace std;
int main(){
  int n=121;
  int original=n;
  int temp=n;
  int sum=0;
  while(n>0){
    temp=n%10;
    sum=(sum*10)+temp;
    n=n/10;
  }
  cout<<sum;
  if(sum==original){
    cout<<"The number is a palindrome!"<<endl;
  }
  else{
    cout<<"The number is not a palindrome"<<endl;
  }
  return 0;
}