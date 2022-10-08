#include<stdio.h>

int increment(int a);

int main(void)
{
    int a;
    printf("Number of input\n");
    scanf("%d",&a);
    printf("Value of a before function call %d \n",a);
    increment(a);
    printf("Value of a after function call %d \n",a);
    return 0;
}
int increment(int a)
{
    a = a+2;
    printf("Value of a p.d. function:%d\n",a);
    return a;
}