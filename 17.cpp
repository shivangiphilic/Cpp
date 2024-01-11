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
class D: public B

{
public:
D(int x):B(x)

{

cout<<"D"<<x;
}
};
int main()

{
D d(11);
return 0;
}
