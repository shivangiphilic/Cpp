#include <iostream>
#include <cstring>
using namespace std;
class A
{
public:
    char s[10];
    void set()
    {
        cout << "Enter a string: ";
        cin >> s;
    }
    void print()
    {
        cout << "The string is " << s << "\n";
    }
    void operator +(A obj)
    {
        strcat(s,obj.s);
        cout << "String after concatenation: " << s << "\n";
    }
    void operator = (A obj)
    {
        strcpy(s,obj.s);
        cout << "String after copying: " << s << "\n";
    }
};

int main()
{
    A o1;
    o1.set();
    o1.print();
    A o2;
    o2.set();
    o2.print();
    o1 + o2;
    o1 = o2;
}
