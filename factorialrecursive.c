#include<stdio.h>
int fact(int num);
int x;
main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    x =num;
    fact(num);
}

int fact(int num){
    if(num != 0){
        if (x % num == 0){
            printf("%d",num);
            return fact(num -1);
        }
        else {return fact(num-1);}
    else return 0;
   }
}