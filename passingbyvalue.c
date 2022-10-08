#include<stdio.h>

void swapbyref(int *,int *);

int main(void){
    int a = 20;
    int b = 40;
    printf("value before swapping:\n a = %d \n b = %d\n",a,b);
    swapbyref(&a,&b);
    printf("value after swapping:\n a = %d \n b = %d\n",a,b);
}

void swapbyref(*num1 , *num2){
    int num3 = *num2;
    *num2 = *num1;
    *num1 = num3;
    printf("value during function:\n a = %d \n b = %d\n",*num1,*num2);  
}
