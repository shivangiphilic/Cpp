#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A();
    A(int);
    A(A &);
    void show();
};

A :: A()
{
    a = 0;
}

A :: A(A &Ob)
{
    a = Ob.a;
}

A :: A(int i)
{
    a = i;
}

void A :: show()
{
    cout<<a<<endl;
}

int main()
{
    A OB1(5);
    OB1.show();

    A OB3(OB1);
    OB3.show();

}
