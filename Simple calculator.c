#include<stdio.h>
#include<math.h>
main()
{
    char op;
    float a;
    float b;
    float ans;
    printf("enter the values to be evaluated and the operator\n");
    scanf("%f%f%*c%c",&a,&b,&op);
    switch(op)
    {
        case'+': ans=a+b;
                 printf("a+b=%f",ans);
                 break;
        case'-': ans=a-b;
                 printf("a-b=%f",ans);
                 break;
        case'*': ans=a*b;
                 printf("a*b=%f",ans);
                 break;
        case'/':if(b==0)
                 {
                      printf("MATH ERROR \n");
                 }
                else
                {ans=a/b;
                 printf("a/b=%f",ans);
                }
                break;
         case'%': ans=(int)a%(int)b;
                 printf("a%b=%f",ans);
                 break;
        default:  printf("invalid\n");
    }
}

