#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class Stack{
    Node* top;

public:
    Stack(){
        top=NULL;
    }

    void push(){
        int val;

        Node* newnode=new Node;

        cout<<"Enter element: ";
        cin>>val;

        newnode->data=val;
        newnode->next=top;
        top=newnode;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow\n";
        }
        else{
            Node* temp=top;

            cout<<"Deleted element: "<<top->data<<'\n';

            top=top->next;
            delete temp;
        }
    }

    void display(){
        if(top==NULL){
            cout<<"Stack is empty\n";
        }
        else{
            Node* temp=top;

            cout<<"Stack elements: ";

            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
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
