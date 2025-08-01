#include <iostream>
using namespace std;
int sum(int n){
  //return n=n*(n+1)/2;
  int s=0;
  int i;
  for(i=1;i<=n;i++){
    s=s+i;
  }
  return s;
}
/*int sum(int n){
  if(n==0){
    return 0;
  }
  else{
    return sum(n-1)+n;
  }
}*/
int main(){
  int n;
  cout<<"Enter a value of n:"<<endl;
  cin>>n;
  cout<<sum(n)<<endl;
}
