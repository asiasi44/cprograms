#include<stdio.h>
int main()
{
   int i,j,a;
   a = 1;
   for(i=0;i<5;i++){
    for (j = 0;j<=i;j++){
        printf("%d",a);
        a++;
    }
    printf("\n");
       


   }
}