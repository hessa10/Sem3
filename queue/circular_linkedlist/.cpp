#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class CQueue{
    Node *front,*rear;

public:
    CQueue(){
        front=rear=NULL;
    }

    void enqueue(){
        int val;

        Node* newnode=new Node;

        cout<<"Enter the element: ";
        cin>>val;

        newnode->data=val;

        if(front==NULL){
            front=rear=newnode;
            rear->next=front;
        }
        else{
            rear->next=newnode;
            rear=newnode;
            rear->next=front;
        }
    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue Underflow\n";
        }
        else if(front==rear){
            cout<<"Deleted element: "<<front->data<<'\n';
            delete front;
            front=rear=NULL;
        }
        else{
            Node* temp=front;

            cout<<"Deleted element: "<<front->data<<'\n';

            front=front->next;
            rear->next=front;

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

            do{
                cout<<temp->data<<" ";
                temp=temp->next;
            }while(temp!=front);

            cout<<'\n';
        }
    }
};

int main(){
    CQueue q;
    int ch;

    do{
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout<<"Enter choice: ";
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
