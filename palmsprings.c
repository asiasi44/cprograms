#include<stdio.h>

float SUM(int n)
{
    int i;
    float a, sum = 0;
    for(i=1;i<=n;++i)
    {
        scanf("%f",&a);
        sum = sum + a;
    }
    return sum;
}

int main(void)
{
    int n;
    float y;
    printf("Number of input\n");
    scanf("%d",&n);
    y = SUM(n);
    printf("Sum of %d is %f",n,y);
    return 0;
}