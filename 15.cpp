#include <iostream>
using namespace std;

class B
{
public:

B(int x)
{
cout<<"B"<<x;
}
};
class C
{
public:
C(int x)
{
cout<<"C"<<x;
}
};
class D: public C,B
{
public:
D(int x, int y, int z):B(x),C(y)
{
cout<<"D"<<z;
}
};
int main()
{
D d(1,2,3);

return 0;
}
