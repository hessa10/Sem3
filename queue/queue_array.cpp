#include<iostream>
using namespace std;

#define SIZE 100

class Queue{
    int a[SIZE];
    int front, rear;

public:
    Queue(){
        front=-1;
        rear=-1;
    }

    void enqueue(){
        int val;

        if(rear==SIZE-1){
            cout<<"Queue Overflow\n";
        }
        else{
            cout<<"Enter the element: ";
            cin>>val;

            if(front==-1)
                front=0;

            rear++;
            a[rear]=val;
        }
    }

    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue Underflow\n";
        }
        else{
            cout<<"Deleted element: "<<a[front]<<'\n';
            front++;
        }
    }

    void display(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty\n";
        }
        else{
            cout<<"Queue elements: ";
            for(int i=front;i<=rear;i++){
                cout<<a[i]<<" ";
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
