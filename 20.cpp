#include <iostream>
using namespace std;
class B
{
public:
    ~B()
{
cout<<"B";
}
};
class C
{
public:
    ~C()
{
cout<<"C";
}
};
class D: public B, C
{
public:
    ~D()
{
cout<<"D";
}
};
int main()
{
D d;
return 0;
}
