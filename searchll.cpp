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
int searchElement(Node *head, int key){
  Node *curr=head;
  while(curr!=nullptr){
    if(curr->data==key){
      return true;
    }
    curr=curr->next;
  }
  return false;
}
int main(){
  Node *head=new Node(5);
  head->next=new Node(3);
  head->next->next=new Node(4);
  head->next->next->next=new Node(1);
  head->next->next->next->next=new Node(8);
  int key=5;
  if(searchElement(head,key)){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
  return 0;
}