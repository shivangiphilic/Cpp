//when variable is NOT defined in the same block it is used in
#include <iostream>
using namespace std;

int x;

int function()
{
    cout << "Enter value of x: ";
    cin >> x;
    return x;
}

int main()
{
    extern int x;
    function();
    cout << "x: " << x;
}
