#include <iostream>
using namespace std;

int main()
{
    int row,c,n;
    cout << "Enter the number of rows\n";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        for (c = 1; c <= n-row; c++)
        cout << " ";

        for (c = 1; c <= 2*row - 1; c++)
        cout << "*";

    cout << "\n";
  }

}
