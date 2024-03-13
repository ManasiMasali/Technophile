#include<stdio.h>

void read(int[], int);
void display(int[], int);
void occ(int[], int);

int main()
{
    int n, T[100];
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    read(T, n);
    printf("List of numbers:\n");
    display(T, n);
    occ(T, n);
    return 0;
}

void read(int T[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &T[i]);
    }
}

void display(int T[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }
}

void occ(int T[100], int n)
{
    int i, j, num, count;
    printf("\nThe number of 4 in each element:\n");
    for (i = 0; i < n; i++)
    {
        num = T[i];
        count = 0;
        while (num != 0)
        {
            if (num % 10 == 4)
            {
                count++;
            }
            num /= 10;
        }
        printf("%d: %d\n", T[i], count);
    }
}
