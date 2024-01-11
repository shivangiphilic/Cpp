#include <iostream>
using namespace std;

template<typename T>
T factorial(T n)
{
    int i, fact = 1;
    for(i=1;i<=n;i++)
        fact *= i;
    return fact;
}

int main()
{
    cout << "Factorial of " << 5 << " is " << factorial(5) << "\n";
    cout << "Factorial of " << 5.0 << " is " << factorial(5.0) << "\n";
    cout << "Factorial of " << 3.2 << " is " << factorial(3.2) << "\n";
}
