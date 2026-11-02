#include<iostream>
#include<string>

template <class T>
class operation
{
    private:
    T a, b;

    public:
    operation(T x, T y)
    {
        a = x;
        b = y;
    }

    T sum()
    {
        return a+b;
    }
};

int main()
{
    operation<int> obj1(10,20);
    operation<double> obj2(12.5,3.5);
    operation<std::string> obj3("Hello ","World");

    std::cout<<obj1.sum()<<'\n';
    std::cout<<obj2.sum()<<'\n';
    std::cout<<obj3.sum()<<'\n';

    return 0;
}
