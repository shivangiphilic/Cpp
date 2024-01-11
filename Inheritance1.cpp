#include <iostream>
using namespace std;

class base
{
public:
    virtual void mem_func()         //virtual is used to tell that the same func will be redefined in derived class
    {
        cout << "This is base class." << "\n";
    }
};

class derived : public base
{
public:
    void mem_func()
    {
        cout << "This is derived class." << "\n";
    }
};

int main()
{
    base b;
    b.mem_func();

    base *p;                //ptr to base class
    p = &b;
    p -> mem_func();

    derived d;
    d.mem_func();
}
