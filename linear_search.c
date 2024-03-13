#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void read(float[],int);
void display(float[],int);
int linear_search(float[], int,float);
main()
{ float m[100],key;
  int n,count;
  printf("Enter the value of n\n");
  scanf("%d",&n);
   printf("enter the numbers\n");
  read(m,n);
 printf("The numbers are:\n");
  display(m,n);
  printf("\nEnter the key value\n");
  scanf("%f",&key);
  count=linear_search(m,n,key);
  if(count>0)
   { printf("key is found\n");
   }
  else
   { printf("key is not found\n");
   }
}
void read(float m[100],int n)
{ int i;
     for(i=0;i<n;i++)
       { scanf("%f",&m[i]);
       }
}
void display(float m[100],int n)
{ int i;
     for(i=0;i<n;i++)
       { printf("%f ",m[i]);
       }
}
int linear_search(float m[100],int n,float key)
{ int i,count=0;
  for(i=0;i<n;i++)
   { if(m[i]==key)
      { count++;
      }
   } return count;
}
