#include <iostream>
#include <cstring>
using namespace std;
class exc
{
private:
    int val;
    char str[100];
public:
    exc(int x,char *s)
    {
        val = x;
        strcpy(str,s);
    }
    void display()
    {
        cout << val << ": ";
        cout << str;
    }
};
int main()
{
    int x;
    cout << "Start\n";
    try
    {
        cout << "Enter val: ";
        cin >> x;
        if(x<0)
        {
            exc E(x,"Negative is not allowed\n");
            throw E;
        }
    }
    catch(exc P)
    {
        P.display();
    }
}
