#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int d){
    data=d;
    next=nullptr;
  }
};
class Queue{
  Node* front;
  Node* rear;
  public:
  Queue(){
    front=nullptr;
    rear=nullptr;
  }
  void enqueue(int x){
    Node* newnode=new Node(x); 
    newnode->data=x;
    newnode->next=nullptr;
    if(front==nullptr && rear==nullptr){
      front=rear=newnode;
    }
    else{
      rear->next=newnode;
      rear=newnode;
    }
  }
  void display(){
    Node* temp= front;
    if(front==nullptr && rear==nullptr){
      cout<<"List is empty\n";
      return;  
    }
    else{
      while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
      }
      cout<<endl;
    }
  }
  void dequeue(){
    Node* temp=front;
    if(front==nullptr && rear==nullptr){
      cout<<"Underflow\n";
      return;  
    }
    else{
      cout<<front->data<<" ";
      front=front->next;
      delete temp;
    }
  }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();   // 10 20 30
    q.dequeue();   // Dequeued: 10
    q.display();   // 20 30
    q.dequeue();   // Dequeued: 20
    q.dequeue();   // Dequeued: 30
    q.dequeue();   // Underflow
    return 0;
}