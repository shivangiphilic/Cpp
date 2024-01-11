//c does not have references
#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int *xp = &x;
    const int &y = x;           //reference to y
    cout << x << "\n";          //cuz of const no we cant change x through y
    cout << y << "\n";
    cout << *xp << "\n";

    //y = 10;             //changing y changes x also cuz we are not actually changing y, y is still a reference to x
    cout << x << "\n";  //reference is not a variable
    cout << y << "\n";  //reference is not a pointer
    cout << *xp << "\n";

}
