#include<stdio.h>

int fact(int);
int a,i;


int main(void){
    printf("give a number whose factorial is to be found:");
    scanf("%d",&a);
    fact(a);
}

int fact(int a){
    for(int i=1;i<=(a);i++){
            printf("%d",i);
    }return 0;
}