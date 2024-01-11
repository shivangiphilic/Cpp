#include <bits/stdc++.h>
using namespace std;

class Integer
{
    private:
        int i;

    public:
        Integer(int i = 0)
        {
            this->i = i;
        }

    Integer operator++()
    {
      //Integer temp;
      i = ++i;
      return *this;
    }
    Integer operator++(int)
    {
        Integer temp;
        temp.i = i++;
        return *this;
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
    Integer i2 = ++i1;
    ++i1;
    cout << "After prefix: ";
    i2.display();
    i2 = i1++;
    cout << "After postfix: ";
    i2.display();
}
