#include <iostream>
#include <deque>
using namespace std;
int main(){
  deque<int> stack;
  stack.push_back(30);
  stack.push_back(20);
  stack.push_back(10);
  stack.push_back(5);
  cout<<"Top element is"<<stack.back()<<endl;
  stack.pop_back();
  cout<<"After poping the top element is:"<<stack.back();
  return 0;
}
