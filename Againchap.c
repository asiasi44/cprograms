#include <stdio.h>
int a[12] [12];
main()
{
    int r,c;
    printf("Enter number of rows");
    scanf("%d",&r);
    printf("Enter number of columns");
    scanf("%d",&c);
    for (int i = 0 ; i< r;i++){
        for (int j = 0; j< c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    

    for (int i = 0 ; i< r;i++){
        for (int j = 0; j< c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}
