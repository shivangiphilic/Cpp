#include <iostream>
using namespace std; int main()
{
int n,i;
cin >> n;
int a[n];
for(i=0;i<n;i++)
    cin >> a[i];
cout << "Deleted element is " << a[n-1] << "\n";
printf("The elements in stack\n");
for(i=n-2;i>=0;i--)
{
cout << a[i] << "\n";
}
}
