#include<iostream>
using namespace std;

int main(){
    int ub, arr[100], pos, val, n;

    cout<<"Enter the size of the array"<<'\n';
    cin>>n;

    cout<<"Enter the array elements: "<<'\n';
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The array is: "<<'\n';
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Enter the upper bound of the array: "<<'\n';
    cin>>ub;

    cout<<"At which index do we have to insert? "<<'\n';
    cin>>pos;

    cout<<"Which value do you need to insert? "<<'\n';
    cin>>val;

    for(int i=ub;i>=pos;i--){
        arr[i+1]=arr[i];
    }

    arr[pos]=val;
    ub=ub+1;

    for(int i=0;i<ub;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
