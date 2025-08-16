#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
  if(front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=x;
  }
  else if(rear==N-1){
    cout<<"overflow\n";
    return;
  }
  else{
    rear++;
    queue[rear]=x;
  }
}
void dequeue(){
  if(front==-1 && rear==-1){
    cout<<"Underflow\n";
    return;
  }
  else if(front==rear){
    front=rear=-1;
  }
  else{
    front++;
  }
}
void display(){
  if(front==-1 && rear==-1){
    cout<<"Queue is empty\n";
    return;
  }
  else{
    for(int i=front;i<rear+1;i++){
      cout<<queue[i]<<" ";
    }
  }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); // Will show Overflow

    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Will show Underflow

    display();
}