#include<iostream>
using namespace std;
int main(){
  int *p;
  int *q;
  int i;
  p=new int[3];
  p[0]=10;
  p[1]=5;
  p[2]=8;
  q=new int[5];
  for(i=0;i<5;i++){
    q[i]=p[i];
    cout<<q[i]<<endl;
  }
  p=q;
  q=NULL;
  cout<<p[i]<<endl;
  return 0;
}