#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
  Node(int d){
    data=d;
    next=nullptr;
  }
};
int countNode(Node *head){
  int count=0;
  Node *curr=head;
  while(curr!=nullptr){
    count++;
    curr = curr->next;
  }
  return count;
}
int main(){
  Node *head=new Node(1);
  head->next=new Node(5);
  head->next->next=new Node(2);
  head->next->next->next=new Node(4);
  head->next->next->next->next=new Node(9);
  cout<<"Count is:"<<countNode(head)<<endl;
  return 0;
}