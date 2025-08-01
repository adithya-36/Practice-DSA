#include <iostream>
using namespace std;
void fun(int n){
  while(n>0){
    cout<<n<<endl;
    n--;
  }
}

int main(){
  fun(3);
  return 0;
}