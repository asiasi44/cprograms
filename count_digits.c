#include<stdio.h>
main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    do{
        i++;
        n = n/10;
    }
    while(n != 0);
    printf("The digits are %d",i);
}