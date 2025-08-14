#include <iostream>
using namespace std;
int main(){
  int A[5]={1,2,3,4,5};
  int i;
  int *P;
  P = new int[5];
  P[0]=10;
  P[1]=20;
  P[2]=30;
  P[3]=40;
  P[4]=50;
  for(i=0;i<5;i++){
    cout<<A[i]<<endl;
  }
  for(i=0;i<5;i++){
    cout<<P[i]<<endl;
  }
  return 0;
}