#include <cstdio>

class C
{
    int i=0;
public:                 //members of a class are private by default
    void setvalue(int value)
        {
            i = value;
        }
    int getvalue()
        {
            return i;
        }
};

int main()
{
    int i =47;
    C ob1;              //ob1 is an object of class C
    ob1.setvalue(i);
    printf("%d\n",ob1.getvalue());
}
