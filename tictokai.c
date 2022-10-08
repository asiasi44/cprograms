#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x[12][12],pos1,pos2;
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0;j<3;j++){
            x[i][j] = 0;
    }
    }

    for(int p =0;p<9;p++){


        printf("Enter the row and column of your 5 or 1\n");
        scanf("%d%d",&pos1,&pos2);
        if (p%2 == 0 ){
            x[pos1][pos2] = 5;
        }
        else{
            x[pos1][pos2] = 1;
        }
        printf("\n ----- ----- -----\n");
        for(int i = 0 ; i<3 ; i++){
            printf("|");
            for(int j = 0;j<3;j++){
                printf("  %d  |",x[i][j]);
        }
        printf("\n ----- ----- -----\n");

        }
    }

}
