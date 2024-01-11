#include <cstdio>
//func takes int ref as arg and returns int ref
int & f(int & i)
{
    return ++i;
}

int main()
{

    int i = 5;
    int & ir = i;       //integer reference
    printf("%d\n",i);
    printf("%d\n",f(i));
    ir = 10;
    printf("%d\n",i);
    printf("%d\n",f(i));
}
// A reference cannot be NULL, uninitialized or be changed to point to another var
//Usually, use const ref, otherwise use pointers
