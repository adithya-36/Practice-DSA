#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,count=0;
  cout<<"Enter an integer: "<<endl;
  cin>>n;
  for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
      count++;
      if(i!=n/i){
        count++;
      }
    }
  }
  if(count>2){
    cout<<"The number is not prime";
  }
  else{
    cout<<"The number is prime";
  }
  return 0;
}