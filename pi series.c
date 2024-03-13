#include<stdio.h>
float pi(int);
main()
{
    int n;
    float pI;
    printf("enter the number of iterations\n");
    scanf("%d",&n);
    pI=pi(n);
    printf("The value of pi is=%f",pI);
}
float pi(int n)
{
    int i=1,sign=1;
    float sum=0;
    while(n)
    {
        sum=sum+(1.0/i)*sign;
        i=i+2;
        sign=sign*(-1);
        n--;
    }
    return sum*4;
}
