#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{
    int i,count = 0;
    for(i=0;string[i]!='\0';i++)
    {
        count++;
    }

    printf("The number of characters is: %d\n", count);
    return 0;
}
