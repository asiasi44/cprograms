#include<stdio.h>

int SUM(int, int);

int main(void)
{
    int a, b, c, d;
    printf("give value for a, b, c and d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("\n");
    printf("sum of 2 number is %d",SUM(a,b));
    printf("sum of 4 number is %d",SUM(c,d));
}

int SUM(int x, int y)
{
    static int sum = 0;
    sum = sum + x + y;
    return sum;
}