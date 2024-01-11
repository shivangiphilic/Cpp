#include <iostream>
using namespace std;
void table(int);
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    table(n);
}

void table(int n)
{
    int i, prod;
    for(i=1;i<=10;i++)
    {
        prod=n*i;
        cout << n << " * " << i << " = " << prod <<"\n";
    }

}
