#include <iostream>
using namespace std;
class Node{
  public:
  int  data;
  Node *next;
  Node(int d){
    data=d;
    next=nullptr;
  }
};
class MyStack{
  Node* top;
  public:
  MyStack(){
    top=nullptr;
  }
  void push(int x){
    Node* newnode= new Node(x);
    newnode->next=top;
    top=newnode;
    cout<<x<<"\n";
  }
  void pop(){
    if(top==nullptr){
      cout<<"Underflow\n"<<endl;
      return;
    }
    Node *temp=top;
    cout<<top->data<<" is popped\n"<<endl;
    top=top->next;
    delete temp;
  }
  int peek(){
    if(top==0){
      cout<<"underflow\n";
      return -1;
    }
    return top->data;
  }
  bool isEmpty(){
    return top==nullptr;
  }
};
int main() {
    MyStack s;
    s.push(5);
    s.push(3);
    s.push(4);

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.push(1);
    s.push(8);
    s.pop();

    if (s.isEmpty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}