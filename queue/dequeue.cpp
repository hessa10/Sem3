#include<iostream>
using namespace std;

#define SIZE 5

class Deque{
    int a[SIZE];
    int front,rear;

public:
    Deque(){
        front=-1;
        rear=-1;
    }

    void insertFront(){
        int val;

        if((front==0 && rear==SIZE-1) ||
           (front==rear+1)){
            cout<<"Deque Overflow\n";
        }
        else{
            cout<<"Enter element: ";
            cin>>val;

            if(front==-1){
                front=rear=0;
            }
            else if(front==0){
                front=SIZE-1;
            }
            else{
                front--;
            }

            a[front]=val;
        }
    }

    void insertRear(){
        int val;

        if((front==0 && rear==SIZE-1) ||
           (front==rear+1)){
            cout<<"Deque Overflow\n";
        }
        else{
            cout<<"Enter element: ";
            cin>>val;

            if(front==-1){
                front=rear=0;
            }
            else if(rear==SIZE-1){
                rear=0;
            }
            else{
                rear++;
            }

            a[rear]=val;
        }
    }

    void deleteFront(){
        if(front==-1){
            cout<<"Deque Underflow\n";
        }
        else{
            cout<<"Deleted: "<<a[front]<<'\n';

            if(front==rear){
                front=rear=-1;
            }
            else if(front==SIZE-1){
                front=0;
            }
            else{
                front++;
            }
        }
    }

    void deleteRear(){
        if(front==-1){
            cout<<"Deque Underflow\n";
        }
        else{
            cout<<"Deleted: "<<a[rear]<<'\n';

            if(front==rear){
                front=rear=-1;
            }
            else if(rear==0){
                rear=SIZE-1;
            }
            else{
                rear--;
            }
        }
    }

    void display(){
        if(front==-1){
            cout<<"Deque is empty\n";
        }
        else{
            int i=front;

            cout<<"Deque elements: ";

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
    Deque d;
    int ch;

    do{
        cout<<"\n1.Insert Front\n2.Insert Rear";
        cout<<"\n3.Delete Front\n4.Delete Rear";
        cout<<"\n5.Display\n6.Exit\n";

        cout<<"Enter choice: ";
        cin>>ch;

        switch(ch){
            case 1: d.insertFront(); break;
            case 2: d.insertRear(); break;
            case 3: d.deleteFront(); break;
            case 4: d.deleteRear(); break;
            case 5: d.display(); break;
            case 6: cout<<"Exit"; break;
            default: cout<<"Invalid choice";
        }
    }while(ch!=6);

    return 0;
}
