#include<stdio.h>

int palindrome(int);

int main()
{
    int n,p;
    printf("enter the number\n");
    scanf("%d",&n);
    p=palindrome(n);
    if(p==0)
    {
        printf("THE GIVEN NUMBER IS NOT A PALINDROME\n");
    }
    else
    {
        printf("THE GIVEN NUMBER IS A PALINDROME\n");
    }
    return 0;
}

int palindrome(int n)
{
    int r,s=0,temp=n;
    while(temp>0)
    {
        r=temp%10;
        s=s*10+r;
        temp=temp/10;
    }
    if(s==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
