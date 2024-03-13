#include<stdio.h>
main()
{
    float f,c;
    printf("Enter the temp in faheranheit\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temp in centigrate=%f",c);
}
