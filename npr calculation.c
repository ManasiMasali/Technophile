#include<stdio.h>
float npr(int,int);
int fact_number(int);
main()
{
     int n,r;
     float res;
     printf("Enter the value of n and r\n");
     scanf("%d%d",&n,&r);
     res=npr(n,r);
     printf("npr=%f",res);
}
float npr(int n, int r)
{
    float res,a,b;
    a=fact_number(n);
    b=fact_number(n-r);
    res=a/b;
    return res;
}
int fact_number(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
     return f;
}

