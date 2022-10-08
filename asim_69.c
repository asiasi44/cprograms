#include<stdio.h>

typedef struct{
    char name[80];
    char dept[30];
    int roll_no;
}studinfo;

main()
{
    studinfo a;
    printf("a store %d bytes",sizeof(a));
}