#include<stdio.h>

struct booklist{
    char title[30];
    char author[40];
    int cost;
};

int main(void){
    struct booklist book[4];
    int totalcost = 0;
    
    for(int i =0; i<4; i++){
        printf("Deatils for book %d :",i+1);
        printf("\nEnter title:\t");
        scanf("%s",book[i].title);
        printf("\nEnter Author:");
        scanf("%s",book[i].author);
        printf("\nEnter Cost:");
        scanf("%d",&book[i].cost);
        totalcost = totalcost + book[i].cost;
    }
    printf("The total cost of the books is %d",totalcost);
}