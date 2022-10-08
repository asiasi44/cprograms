#include<stdio.h>
union number{
    int x;
    double y;
};
int main(void){
    union number value;
    value.y = 2002.0;
    value.x = 100;

    printf("The value of x is %d and the value of y is %f",value.x,value.y);
}