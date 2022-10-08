#include<stdio.h>
int a;
void call(void);
int asim(void);

int main(void)
{
    printf("\n Give value for a:");
    scanf("%d",&a);
    printf("\n value of a in main function:%d",a);
    call();
    printf("\n value of a in m.f. after function call: %d",a);
}
void call(void)
{
    a = a + 2;
    printf("\n value of a in call function:%d",a);
}