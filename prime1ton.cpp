#include <iostream>
using namespace std;
int main()
{
    int n, i, j, count;
    cout << "Enter a number: ";
    cin >> n;
    for(i=1;i<=n;i++)           //nos from 1 to n
    {
        int count = 0;
        for (j=1;j<=i;j++)
        {
            if(i%j==0)          //to check div of 1 to n by 1 to i
            {
                count++;
            }
        }
        if(count==2)
        {
            cout << i << "\n";
        }
    }
}
