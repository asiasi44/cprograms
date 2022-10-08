#include<stdio.h>

int a;

int call(int a);

main()
{
    printf("\n Give value for a:");
    scanf("%d",&a);
    printf("\n value of a min main function:%d",a);
    call(a);
    printf("\n value of a in m.f. after function call:%d",a);
}
int call(int a)
{
    a = a + 2 ;
    printf("\n value of a in call function:%d",a);
}
