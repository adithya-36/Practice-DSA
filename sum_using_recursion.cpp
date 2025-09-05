#include <iostream>
using namespace std;
void func(int n){
  int sum=0;
  //for(int i=1;i<=n;i++){
  //  sum+=i;
  //}
  sum=n*(n+1)/2;
  cout<<sum;
}
int main(){
  int n;
  cin>>n;
  func(n);
}