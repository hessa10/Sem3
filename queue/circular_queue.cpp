#include<iostream>
using namespace std;

#define SIZE 5

class CQueue{
    int a[SIZE];
    int front,rear;

public:
    CQueue(){
        front=-1;
        rear=-1;
    }

    void enqueue(){
        int val;

        if((rear+1)%SIZE==front){
            cout<<"Queue Overflow\n";
        }
        else{
            cout<<"Enter the element: ";
            cin>>val;

            if(front==-1){
                front=0;
            }

            rear=(rear+1)%SIZE;
            a[rear]=val;
        }
    }

    void dequeue(){
        if(front==-1){
            cout<<"Queue Underflow\n";
        }
        else{
            cout<<"Deleted element: "<<a[front]<<'\n';

            if(front==rear){
                front=rear=-1;
            }
            else{
                front=(front+1)%SIZE;
            }
        }
    }

    void display(){
        if(front==-1){
            cout<<"Queue is empty\n";
        }
        else{
            int i=front;

            cout<<"Queue elements: ";

            while(true){
                cout<<a[i]<<" ";

                if(i==rear)
                    break;

                i=(i+1)%SIZE;
            }
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
