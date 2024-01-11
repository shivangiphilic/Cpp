//static variables retain their value even out of scope
#include <iostream>
using namespace std;

void input()
{
    static int x=0;
    int y=0;
    x++;
    y++;
    cout << "x: " << x << "    y: " << y;
}

int main()
{
    input();
    cout << "\n";
    input();
    cout << "\n";
    input();
}
