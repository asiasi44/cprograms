#include<stdio.h>
#include<stdlib.h>
void inputmatrix(int x[12][12],int y[12][12],int,int,int,int);
void multiplymatrix(int x[12][12],int y[12][12],int z[12][12],int,int,int,int);
void printmatrix(int z[12][12],int,int,int,int);

int main(void){
    int n1,m1,m2,n2;
    printf("Enter the number of rows of 1st");
    scanf("%d",&n1);
    printf("Enter the number of columns of 1st");
    scanf("%d",&m1);
    printf("Enter the number of rows of 2nd");
    scanf("%d",&n2);
    printf("Enter the number of columns of 2nd");
    scanf("%d",&m2);
    if (m1 != n2){
        printf("This matrix cannot be multiplied");
        exit(0);
    }
    int x[12][12];
    int y[12][12];
    int z[12][12];
    inputmatrix(x,y,n1,m1,n2,m2);
    multiplymatrix(x,y,z,n1,m1,n2,m2);
    printmatrix(z,n1,m1,n2,m2);
}

void inputmatrix(int x[12][12],int y[12][12],int n1,int m1,int n2,int m2){
    for (int i = 0;i<=n1-1;i++){
        for (int j =0;j<=m1-1;j++){
            printf("Enter matrix x[%d][%d]",i+1,j+1); 
            scanf("%d",&x[i][j]);
    }
    }
    for (int i = 0;i<=n2-1;i++){
        for (int j =0;j<=m2-1;j++){
            printf("Enter matrix y[%d][%d]",i+1,j+1);
            scanf("%d",&y[i][j]);
    }
    }
}

void multiplymatrix(int x[12][12],int y[12][12],int z[12][12],int n1,int m1,int n2,int m2){
    for (int i = 0;i<n1;i++){
        for (int j =0;j<m2;j++){
            z[i][j] = 0;
            for (int k = 0; k < m1; k++){
                z[i][j] += x[i][k]*y[k][j];
            }
    }

    }
}


void printmatrix(int z[12][12],int n1,int m1,int n2,int m2){
    for (int i = 0; i<=n1-1;i++){
        for (int j =0;j<=m2-1;j++){
            printf("%d\t",z[i][j]);
    }
    printf("\n");
    }
}