#include <iostream>
using namespace std;

class myclass
{
    int a,b;
    public:
    int sum(myclass);
    void set_ab(int,int);
};

void myclass::set_ab(int i, int j)
{
    a = i;
    b = j;
}

int myclass::sum(myclass C)
{
    return C.a + C.b;
}

int main()
{
    myclass n;
    n.set_ab(3,4);
    cout << n.sum(n);
}
