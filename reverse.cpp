#include <iostream>
using namespace std;
int main(){
  int n=121;
  int temp=n;
  int sum=0;
  while(n>0){
    temp=n%10;
    sum=(sum*10)+temp;
    n=n/10;
  }
  cout<<sum;
  return 0;
}