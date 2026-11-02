#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class Queue{
    Node *front, *rear;

public:
    Queue(){
        front=NULL;
        rear=NULL;
    }

    void enqueue(){
        int val;

        Node* newnode=new Node;

        cout<<"Enter the element: ";
        cin>>val;

        newnode->data=val;
        newnode->next=NULL;

        if(front==NULL){
            front=rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue Underflow\n";
        }
        else{
            Node* temp=front;

            cout<<"Deleted element: "<<front->data<<'\n';

            front=front->next;

            if(front==NULL){
                rear=NULL;
            }

            delete temp;
        }
    }

    void display(){
        if(front==NULL){
            cout<<"Queue is empty\n";
        }
        else{
            Node* temp=front;

            cout<<"Queue elements: ";

            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<'\n';
        }
    }
};

int main(){
    Queue q;
    int ch;

    do{
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1: q.enqueue(); break;
            case 2: q.dequeue(); break;
            case 3: q.display(); break;
            case 4: cout<<"Exit"; break;
            default: cout<<"Invalid choice";
        }
    }while(ch!=4);

    return 0;
}
