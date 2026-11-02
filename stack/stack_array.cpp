#include<iostream>
using namespace std;

#define SIZE 100

class Stack{
    int a[SIZE];
    int top;

public:
    Stack(){
        top=-1;
    }

    void push(){
        int val;

        if(top==SIZE-1){
            cout<<"Stack Overflow\n";
        }
        else{
            cout<<"Enter element: ";
            cin>>val;
            top++;
            a[top]=val;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
        }
        else{
            cout<<"Deleted element: "<<a[top]<<'\n';
            top--;
        }
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty\n";
        }
        else{
            cout<<"Stack elements: ";
            for(int i=top;i>=0;i--){
                cout<<a[i]<<" ";
            }
            cout<<'\n';
        }
    }
};

int main(){
    Stack s;
    int ch;

    do{
        cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cout<<"Enter choice: ";
        cin>>ch;

        switch(ch){
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.display(); break;
            case 4: cout<<"Exit"; break;
            default: cout<<"Invalid choice";
        }
    }while(ch!=4);

    return 0;
}
