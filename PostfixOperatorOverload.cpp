#include <bits/stdc++.h>
using namespace std;

class Integer {
private:
    int i;

public:
    //constructor
    Integer(int i = 0)
    {
        this->i = i;
    }

    Integer operator++(int)
    {
        Integer temp;
        temp.i = i++;
        return temp;
    }

    void display()
    {
        cout << i << endl;
    }
};

int main()
{
    Integer i1(3);
    cout << "Before : ";
    i1.display();
    Integer i2 = i1++;
    cout << "After : ";
    i2.display();
}
