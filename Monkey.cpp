#include<stdio.h>
long long int monkeys(long long int a,long long int b);
int main()
{
  long long int cases;
  long long int num,i;
  long long int res,c,te,te1;
  scanf("%lld",&cases);
  while(cases--)
  {
    scanf("%lld",&num);
    long long int a[num];
    for(i=0;i<num;i++)
    {
	  scanf("%lld",&a[i]);
	}
    i=0;
    res=1;
    c=0;
    while(i<=num-1)
    {
      te1=i;
      c=0;
      while(a[i]!=0)
      {
        te=i;
        i=a[i]-1;
        a[te]=0;
        c+=1;
      }
      i=te1+1;
      if(c!=0)
        res=res*c/monkeys(res,c);
    }
    printf("%lld\n",res);
  }
  return 0;
}
long long int monkeys(long long int a,long long int b)
{
  if(b==0)
    return a;
  else
    return monkeys(b,a%b);
}
