#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float ans;
    char op;
    cout << "Enter an operator\n";
    cin >> op;
    cout << "Enter two numbers\n";
    cin >> a >> b;

    switch(op)
    {
        case '+':
        ans = a+b;
        cout << "The sum is " << ans;
        break;
        case '-':
        ans = a-b;
        cout << "The difference is " << ans;
        break;
        case '*':
        ans = a*b;
        cout << "The product is " << ans;
        break;
        case '/':
        ans = a/b;
        cout << "The quotient is " << ans;
        break;
        case '%':
        ans = a%b;
        cout << "The remainder is " << ans;
        break;
    }
}

