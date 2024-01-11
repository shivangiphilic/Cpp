#include <cstdio>

int main()
{
    char s[] = "string";

    for(char *p = s; *p; p++)       //loop begins at address of 0th element of array, goes on till ptr exists(\0)
    {
        printf("char is %c\n",*p);
    }
}

