#include<stdio.h>
float SUM(int n); //function prototype or function declaration

 int main(void)  //main function
 {
     int n;
     float y;
     printf("Number of input\n");
     scanf("%d",&n);
     y =SUM(n); //p.d function call
     printf("Sum of %d is %f",n,y);
     return 0;
}

float SUM (int n)  //function definition
{
    int i;
    float a, sum =0;
    for (i=1;i<=n;++i){
        scanf("%f",&a);
        sum =sum+a;
    }
    return sum;
}