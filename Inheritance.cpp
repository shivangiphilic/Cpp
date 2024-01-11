#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A()
    {
        a=10;
        b=20;
        c=30;
    }

protected:
    int b;
private:
    int c;

public:
    void show()
    {
        cout<<a<<"-"<<b<<"-"<<c;
    }

};

class A_derived:public A        //A_derived has all ints and funcs and values of a
{
    int a1;
};
int main()
{
    A_derived ob;
    ob.show();
}
