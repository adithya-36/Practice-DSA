#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
  Node(int d){
    this->data=d;
    this->next=nullptr;
  }
};
void printList(Node *head){
  while(head!=nullptr){
    cout<<head->data;
    if(head->next){
      cout<<"->";
    }
    head=head->next;
  }
}
int main(){
  Node *head= new Node(1);
  head->next= new Node(5);
  head->next->next= new Node(5);
  head->next->next->next= new Node(5);
  head->next->next->next->next= new Node(5);
  printList(head);
  return 0;
}