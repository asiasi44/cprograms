#include<stdio.h>
int main(void){
    int cal;
    for (int i = 1;i<=10;i++){
        for (int j =1;j<=10;j++){
            cal = i*j;
            printf("%d x %d = %d\n",i,j,cal);
        }
    }
}