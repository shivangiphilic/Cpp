#include <iostream>
using namespace std;

void swap(int*,int*);

int main()
{
    int a=100,b=200;
    cout << "Before swap, " << a << "\n";
    cout << "Before swap, " << b << "\n";
    swap(&a,&b);
    cout << "After swap, " << a << "\n";
    cout << "After swap, " << b << "\n";
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
