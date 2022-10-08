#include<stdio.h>
int facto(int);
main()
{
    int n;
    scanf("%d",&n);
    printf("facto is %d",facto(n));
}
int facto(int n){
    if(n<=1)
    return 1;
    else return n*facto(n-1);
}