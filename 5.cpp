#include <iostream>

using namespace std;

class B

{
int a;
public:

virtual void func() {cout << "B" << endl;}
};

class D: public B
{

int a;

public:

void func() {cout << "D" << endl;}
};

int main()
{
B b;
D d;
D *p =&d;
p->func();

return 0;
}
