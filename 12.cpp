#include <iostream>

using namespace std;

class B{

public:
virtual void func1()
{
cout<<"Base func1()";
}

void func2()
{
cout<<"Base func2()";
}
};
class D: public B

{
public:
void func1()
{
cout<<"Derived func1()";
}
void func2()
{
cout<<"Derived func2()";
}
};
int main()

{
B b;

D d;
B *p =&d;
p->func2();

return 0;
}
