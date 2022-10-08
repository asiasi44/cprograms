#include<stdio.h>
#define SIZE 100
int main(void)
{
	float a[SIZE], sum=0, avg;
	int n, i;
	printf("How many numbers?");
	scanf("%d", &n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f", (a+i));
	}
}