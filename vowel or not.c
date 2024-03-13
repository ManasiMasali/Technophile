#include<stdio.h>
main()
{
    char ch;
    printf("enter your character\n");
    scanf("%c",&ch);
    switch(ch)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U': printf("it is a vowel\n");
       break;
       default: printf(" it is not a vowel\n");
       break;
    }

}
