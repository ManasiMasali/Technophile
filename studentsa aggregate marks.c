#include<stdio.h>
main()
{
    int s1,s2,s3,s4,s5,aggregate_marks;
    printf("Enter the marks\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    aggregate_marks=s1+s2+s3+s4+s5;
    printf("aggregate marks=%d",aggregate_marks);
}
