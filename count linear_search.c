#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void read(float[],int);
void display(float[],int);
void maximum(float[],int);
void minimum(float[],int);
int linear_search(float[],int,float);
main()
{ float m[100],max,min,key;
  int n,count;
  printf("Enter the number of students\n");
  scanf("%d",&n);
  read(m,n);
  display(m,n);
  maximum(m,n);
  minimum(m,n);
  printf("\nEnter the key value\n");
  scanf("%f",&key);
  count=linear_search(m,n,key);
  if(count>0)
   { printf("key is found\n");
   }
  else
   { printf("key is not found\n");
   }
   printf("key count: %d\n",count);
}
void read(float m[100],int n)
{ int i;
   printf("Enter the marks obtained by students\n");
     for(i=0;i<n;i++)
       { scanf("%f",&m[i]);
       }
}
void display(float m[100],int n)
{ int i;
   printf("marks obtained by students:\n");
     for(i=0;i<n;i++)
       { printf("%f ",m[i]);
       }
}
void maximum(float m[100],int n)
{ int i,j=0;
  float max;
  max=m[0];
  for(i=0;i<n;i++)
   { if(m[i]>max)
      { max=m[i];
        j=i;
      }
   }
   j++;
 printf("\nMAXIMUM MARKS=%f\nROLL NUMBER=%d\n",max,j);
}
void minimum(float m[100],int n)
{ int i,j=0;
  float min;
  min=m[0];
  for(i=0;i<n;i++)
   { if(m[i]<min)
      { min=m[i];
       j=i;
      }
   }
   j++;
 printf("MINIMUM MARKS=%f\nROLL NUMBER=%d\n",min,j);
   }
int linear_search(float m[100],int n,float key)
 { int i,count=0;
  for(i=0;i<n;i++)
   { if(m[i]==key)
      {
        count++;
      }
   } return count;
}
