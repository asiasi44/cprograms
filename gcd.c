#include<stdio.h>

int gcd(int);
int a,b,i,gc;


int main(void){
    printf("gave a number:");
    scanf("%d",&a);
    printf("give another number:");
    scanf("%d",&b);
    gcd(a);
}

int gcd(int a){
    for(int i=1;i<=(a);i++){
        if (a%i == 0 && b%i == 0){
            gc = i;
        }
    }
    printf("%d",gc);
    return 0;
}

