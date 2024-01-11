#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==1 || n==0)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int i=0,j, n;
    printf("Enter the number of terms\n");
    cin >> n;
    for(j=0;j<n;j++)
        cout << fibonacci(j) << " ";
}

