#include <iostream>
using namespace std;

class Myclass
{
public:
    int a,b;
    Myclass(int a, int b)
    {
        this -> a = a;
        this -> b = b;
    }
    void show()
    {
        cout << a << " " << b << "\n";
    }
    friend void add(Myclass &m);
};

class Yourclass
{
public:
    int c,d;
    Yourclass(int c, int d)
    {
        this -> c = c;
        this -> d = d;
    }
    void add(Myclass &m)
    {
        m.a += c;
        m.b +=d;
        cout << m.a << " " << m.b << endl;
    }
};

int main()
{
    Myclass mc(3,4);
    Yourclass yc(5,6);
    yc.add(mc);
}
