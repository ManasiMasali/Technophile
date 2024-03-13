#include<stdio.h>
main()
{
    float p;
    float t;
    float r;
    float si;
    printf("enter the values of p,t and r\n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("simple interest=%f",si);

}
