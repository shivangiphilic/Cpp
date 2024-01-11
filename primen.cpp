#include <iostream>
using namespace std;
int main()
{
    int i,n,p=2;
    printf("How many prime numbers? \n");
    scanf("%d", &n);
    while(n)
    {
        for (i=2;i<p;i++)
        {
            if(p%i==0)
                break;
        }
        if(i==p)
        {
            printf("%d ",p);
            n--;
        }
        p++;
    }
}
