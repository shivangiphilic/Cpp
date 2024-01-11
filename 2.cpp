#include <iostream>

using namespace std;
class A {
public:

void func() {cout << "A" << endl;}
};

class C {
public:

void func() {cout << "C" << endl;}
};

class B: public A,C {
public:

void func() {cout << "B" << endl;}
};

int main()

{
B b;

b.func();

A a;

a.func();

C c;

C.func();

return 0;
}
