#include <stdio.h>
int rgcd(int a,int b);
int x , y;
main(){
    int a,b;
    printf("enter two number whose gcd is to be calculated");
    scanf("%d%d",&a,&b);
    x = a;
    y = b;
    printf("the gcd of a two numbers are %d",rgcd(a,b));
    
}
int rgcd(int a, int b){ow 
    if (a < b){
        if (b%a == 0 && x % a == 0){
            return a;
        }else {
            if (b % rgcd(a-1,b) == 0){
                return rgcd(a-1,b);
            } ;

        }
}
else if (b < a){
        if (a%b == 0 && y % b == 0){
            return b;
        }else {
            if (a % rgcd(a , b-1) == 0){
                return rgcd(a , b-1);
            }else {}
        }
    }
else if (b == a){
    return a;
}
}