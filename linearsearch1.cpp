#include <iostream>
using namespace std;
int main()
{
    int n,i,key;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> key;
    for(i=0;i<n;i++)
    {
        if (a[i] == key)
        {
            cout << "Element found";
            break;
        }
    }
    if(i == n)
        cout << "Element not found";
}
