#include <iostream>
using namespace std;
int main()
{
    int i,n,x;
    cout << "Enter the number of numbers\n";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers\n";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to search\n";
    cin >> x;
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            cout << x << " is present at " << i+1 << " position";
            break;
        }
    }
    if(i==n)
    {
        cout << "Not found";
    }

}
