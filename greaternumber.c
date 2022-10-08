#include<stdio.h>
int greater();

int main(void){
    int a;
    a = greater();
    if (a ==0){
        printf("They are equal");
    }else{
    printf("the greater number is %d" , a);
    }
    return 0;
}

int greater(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if (a==b){
        return 0;
    }
    else if(a < b){
        return b;
    }else{return a;}
}