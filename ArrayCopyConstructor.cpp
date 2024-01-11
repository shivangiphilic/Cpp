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
    int n;
    int i;
    cout<<"Enter size of array :- ";
    cin>>n;
    int x[n];
    cout<<"Enter array elements :- ";
    for(i=0;i<n;i++)
        cin>>x[i];
    for(i=0;i<n;i++)
    {
        A OB1(x[i]);
        OB1.show();
    }
    for(i=0;i<n;i++)
    {
        A OB3(x[i]);
        OB3.show();
    }
}
