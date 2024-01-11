#include <cstdio>
#include <iostream>
using namespace std;
double pi = 3.14;

// volume of a cube
double volume( double a )
{
    return a * a * a;
}

// volume of a cylinder
double volume( double r, double h )
{
    return pi * r * r * h;
}

// volume of a cuboid
double volume( double a, double b, double c )
{
    return a * b * c;
}

int main()
{
    cout << "volume of cube: " << volume(2.0) << "\n";
    cout << "volume of cylinder: " << volume(2.0, 2.0) << "\n";
    cout << "volume of cuboid: " << volume(2.0, 3.0, 4.0) << "\n";
}
