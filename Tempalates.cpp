#include<iostream>
using namespace std;

template <class dataType>
void func(dataType x)
{
    cout << x << "\n";
}
int main()
{
    func(10);
    func("cpp");
}
