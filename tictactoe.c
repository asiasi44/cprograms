#include<stdio.h>
#include<string.h>
int main(void){
    char x[] = "         ";
    for(int i = 0; i<= 8; i++){
        int a = i+1;

        if(a%3 == 1){
            printf("| -----  | ------ | ----- |\n\n");
        }

        printf("    %c    ",x[i]);

        if (a % 3 == 0){
            printf("\n");
        }else{printf("");}


    }
    for (int j = 0; j<=8;j++){
        int y;
        scanf("%d",&y);
        if (j%2 == 0){
            x[y] = 'O';
        }
        else{
            x[y] = 'X';
        }
        printf("| -----  | ------ | ----- |\n");

        printf("Enter the position of the X or O");

        for(int i = 0; i<= 8; i++){
            int a = i+1;

            if(a%3 == 1){
                printf("| -----  | ------ | ----- |\n\n");
            }

            printf("    %c    ",x[i]);

            if (a % 3 == 0){
                printf("\n\n");
            }
            else
            {
                printf("");
            }
        }
        printf("| -----  | ------ | ----- |\n");
    }

}