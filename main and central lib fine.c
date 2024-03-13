#include<stdio.h>
#include<math.h>
void centrallib(int);
void mainlib(int);
int main()
{  int m,c;
   int d;
   char lib;
   printf("Enter the type of library c/m:\n");
   scanf("%c",&lib);
 switch(lib)
    {
        case 'c':
            printf("Enter number of days (in central library):\n");
            scanf("%d", &d);
            centrallib(d);
            break;
        case 'm':
            printf("Enter number of days (in main library):\n");
            scanf("%d", &d);
            mainlib(d);
            break;
        default:
            printf("Invalid input!\n");
            break;
    }
    return 0;
}
void centrallib(int d)
{  float f;
 if(d<=5)
    {
        f=d*0.5;
    }
  else if(d>=6 && d<=10)
    {
        f=2.5+(d-5)*1;
    }
  else if(d>=11 && d<=30)
    {
        f=2.5+5+(d-10)*5;
    }
  else
    {
       f=2.5+5+(d-10)*5;
       printf("your membership is canceled \n");
    }
printf("TOTAL FINE=%f",f);
}

void mainlib(int d)
{
  float f;
if(d<=5)
    {
        f=d*1;
    }
  else if(d>=6 && d<=10)
    {
        f=2.5+(d-5)*2;
    }
  else if(d>=11 && d<=30)
    {
        f=2.5+5+(d-10)*10;
    }

 else
  {    f=2.5+5+(d-10)*10;
    printf("You cannot borrow books");
  }
printf("TOTAL FINE=%f",f);
}
