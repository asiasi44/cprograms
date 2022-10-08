#include<stdio.h>
int main()
{
    int num, sum= 0;
    printf("number:");
    scanf("%d",&num);
    for(int i=0;i<=(num/2);i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
            printf("It is perfect.");
        }
        else{
            printf("It isn't a perfect number.");
        }
}