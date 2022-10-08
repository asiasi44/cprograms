#include<stdio.h>

struct studinfo{
    char name[80];
    char dept[30];
    int roll_no;

};

main()
{
    struct studinfo si;
    printf("Your name:");
    scanf("%[^\n]",si.name);
    printf("\nYour department");
    scanf("%s",si.dept);
    printf("\nYour roll number");
    scanf("%d",&si.roll_no);
    printf("****************");
    printf("\nYour Name:%s",si.name);
    printf("\nYour Department:%s",si.dept);
    printf("\nYour Roll Number:%d",si.roll_no);
}