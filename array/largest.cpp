#include<iostream>

template<class T>
T maximum(T a,T b){
    return a>b ? a:b;
}

int main(){

    std::cout<<maximum(10,20)<<'\n';
    std::cout<<maximum(4.5,2.8)<<'\n';
    std::cout<<maximum("apple","orange")<<'\n';

    return 0;
}
