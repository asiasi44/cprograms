#include <stdio.h>

int factorial(int a);
int main(void)
{
	int i,n,r,b,x,y;
	float a,c;
	printf("Enter the total number of object");
	scanf("%d",&n);
	printf("Enter the number to be taken");
	scanf("%d",&r);
    x= factorial(n);
    y=factorial(n-r);
	c=factorial(n)/factorial(n-r);
	printf("Value of c is:%f",c);
    return 0;
}

int factorial(int a)
{
    int b,i;
    b = 1;
    for(i=1; i<=a; i++)
	{
		b=b*i;
	}
    return b;
}
