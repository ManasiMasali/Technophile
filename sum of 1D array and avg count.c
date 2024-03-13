#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void read(float[], int);
void display(float[], int);
float sum(float [], int);
int count_avg(float[], int, float);

int main()
{
  float m[100], s = 0, avg;
  int n, count;
  printf("Enter the number of students\n");
  scanf("%d", &n);
  read(m, n);
  display(m, n);
  s = sum(m, n);
  printf("SUM = %f\n", s);
  avg = s/n;
  count = count_avg(m, n, avg);
  printf("Number of students with marks above average = %d\n", count);
  return 0;
}

void read(float m[], int n)
{
    int i;
    printf("Enter the marks obtained by students\n");
    for(i=0; i<n; i++)
    {
        scanf("%f", &m[i]);
    }
}

void display(float m[], int n)
{
    int i;
    printf("Marks obtained by students:\n");
    for(i=0; i<n; i++)
    {
        printf("%f ", m[i]);
    }
    printf("\n");
}

float sum(float m[], int n)
{
    int i;
    float s = 0;
    for(i=0; i<n; i++)
    {
        s = s + m[i];
    }
    return s;
}

int count_avg(float m[], int n, float avg)
{
    int i, count = 0;
    for(i=0; i<n; i++)
    {
        if(m[i] > avg)
        {
            count++;
        }
    }
    return count;
}
