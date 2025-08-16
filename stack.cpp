#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top=-1;
void push(int x){
  if(top==N-1){
    cout<<"Overflow"<<endl;
  }
  else{
    top++;
    stack[top]=x;
  }
}
void pop(){
  int item;
  if(top==-1){
    cout<<"underflow"<<endl;
  }
  else{
    item=stack[top];
    top--;
  }
}
void peek(){
  if(top==-1){
    cout<<"underflow"<<endl;
  }
  else{
    cout<<stack[top];
  }
}
void display(){
  int i;
  for(i=top;i>=0;i--){
    cout<<stack[i];
  }
}
int main(){
  int choice, value;
  do{
    cout<<"--- Stack Menu ---"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Peek"<<endl;
    cout<<"4. Display"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Enter value to push"<<endl;
        cin>>value;
        push(value);
        break;
      case 2:
        pop();
        break;
      case 3:
        peek();
        break;
      case 4:
        display();
        break;
      case 5:
        cout<<"Exit"<<endl;
        break;
      default:
        cout<<"Invalid choice"<<endl;
        break;
    }
  }while(choice != 5);
  return 0;
}