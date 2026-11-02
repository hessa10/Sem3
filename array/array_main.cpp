#include "array.cpp"
#include<iostream>
using namespace std;

int main(){

    array1<int> arr1;
    array1<string> arr2;

    cout<<"Integer Array: "<<'\n';
    arr1.displayarray1();

    cout<<endl<<"String Array: "<<'\n';
    arr2.displayarray1();

    cout<<endl;

    return 0;
}
