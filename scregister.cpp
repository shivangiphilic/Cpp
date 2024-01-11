// register variables are faster to access at runtime
#include <iostream>
using namespace std;
int main()
{
    register int n = 5;
    cout << "int is " << n;
}
