#include<stdio.h>
#include<math.h>

int sum();
int main(void){

    printf("the sum of the series %d",sum());
}

int sum()
{
    int x,n,sum=0;
    printf("Pass the value of x and n respectively");
    scanf("%d%d",&x,&n);

    for(int i = 1;i<=n;i++){
        sum = sum + pow(x,i)*pow(-1,i+1);
    
}
return sum;
}
