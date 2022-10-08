#include<stdio.h>
#include<math.h>

int main(void){
    int n ,rem,sum = 0,a;
    printf("Input enter the number: ");
    scanf("%d",&n);
    a = n;
    int size = log10(n) + 1 ;
    printf("%d",size);
    for(int i = 0;i<size;i++){
        rem = n % 10;
        printf("d",rem);
        n = n/10;
        sum = sum + pow(rem,3);
    }
    printf("asim is %d",sum);
    if (sum == a){
        printf("this is a armstrong number");

    }else{
        printf("this is not a armstrong number");
    }
}