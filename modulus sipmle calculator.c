#include<stdio.h>
float sum(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
int mod(int,int);
main()
{
    float n1,n2;
    char ch;
    float res;
    printf("enter op and 2 numbers\n");
    scanf("%c%f%f",&ch,&n1,&n2);
    switch(ch)
    {
        case'+':res=sum(n1,n2);
                break;
        case'-':res=sub(n1,n2);
                break;
        case'*':res=mul(n1,n2);
                break;
        case '/': if (n2!=0)
                res=div(n1,n2);
                else
                {
                    printf("error\n");
                    exit(0);
                }
                break;
        case'%':res=mod( (int)n1,(int)n2);
                break;
    }
    printf("Result=%f\n",res);
}
float sum(float a,float b)
{
   float c;
   c=a+b;
   return c;
}
float sub(float a,float b)
{
   float c;
   c=a-b;
   return c;
}
float mul(float a,float b)
{
   float c;
   c=a*b;
   return c;
}
float div(float a,float b)
{
   float c;
   c=a/b;
   return c;
}
int mod(int a,int b)
{
   int c;
   c=a%b;
   return c;
}
