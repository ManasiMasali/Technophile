#include <stdio.h>

void read(int a[100][100], int r, int c);
void display(int a[100][100], int r, int c);
void rsum(int a[100][100], int r, int c);
void csum(int a[100][100], int r, int c);

int main() {
    int a[100][100], r, c;
    printf("Enter values of rows and columns\n");
    scanf("%d%d", &r, &c);
    printf("Enter values of elements of 2D array\n");
    read(a, r, c);
    printf("2D array is:\n");
    display(a, r, c);
    rsum(a, r, c);
    csum(a, r, c);
    return 0;
}

void read(int a[100][100], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[100][100], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void rsum(int a[100][100], int r, int c)
{
    int i, j, sum, max=0, min=0;
    for (i = 0; i < r; i++)
     {
        sum = 0;
        for (j = 0; j < c; j++)
         {
            sum = sum+a[i][j];
         }
        if (i == 0)
         {
             max = min = sum;
         }
        else
         {
            if (max < sum)
             {
                 max = sum;
             }
            if (min > sum)
             {
                min = sum;
             }
        }
        printf("SUM OF %d ROW=%d\n", i + 1, sum);
    }
    printf("Maximum of sum of rows is %d.\n", max);
    printf("Minimum of sum of rows is %d.\n", min);
}

void csum(int a[100][100], int r, int c)
{
    int i, j, sum, max=0, min=0;
    for (i = 0; i < c; i++)
        {
        sum = 0;
        for (j = 0; j < r; j++)
         {
            sum = sum+a[j][i];
         }
        if (i == 0)
         {
            max = min = sum;
         }
       else {
            if (max < sum)
             {
                max = sum;
             }
            if (min > sum)
             {
                min = sum;
             }
        }
        printf("SUM OF %d COLUMN=%d\n", i + 1, sum);
    }
    printf("Maximum of sum of columns is %d.\n", max);
    printf("Minimum of sum of columns is %d.\n", min);
}
