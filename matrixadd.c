#include<stdio.h>
void inputmatrix(int x[12][12],int y[12][12],int,int);
void addmatrix(int x[12][12],int y[12][12],int z[12][12],int,int);
void printmatrix(int z[12][12],int,int);

int main(void){
    int n,m;
    printf("Enter the number of columns");
    scanf("%d",&m);
    printf("Enter the number of ");
    scanf("%d",&n);
    int x[12][12];
    int y[12][12];
    int z[12][12];
    inputmatrix(x,y,n,m);
    addmatrix(x,y,z,n,m);
    printmatrix(z,n,m);
}

void inputmatrix(int x[12][12],int y[12][12],int n,int m){
    for (int i = 0;i<=n-1;i++){
        for (int j =0;j<=m-1;j++){
            printf("Enter matrix x[%d][%d]",i+1,j+1);
            scanf("%d",&x[i][j]);
    }
    }
    for (int i = 0;i<=n-1;i++){
        for (int j =0;j<=m-1;j++){
            printf("Enter matrix y[%d][%d]",i+1,j+1);
            scanf("%d",&y[i][j]);
    }
    }
}

void addmatrix(int x[12][12],int y[12][12],int z[12][12],int n,int m){
    for (int i = 0;i<=n-1;i++){
        for (int j =0;j<=m-1;j++){
            z[i][j] = x[i][j] + y[i][j];
    }

    }
}


void printmatrix(int z[12][12],int n,int m){
    for (int i = 0; i<=n-1;i++){
        for (int j =0;j<=m-1;j++){
            printf("%d\t",z[i][j]);
    }
    printf("\n");
    }
}