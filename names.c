//WAP to find the transpose of matrix using function
#include<stdio.h>
int readinput(int matrix[12][12],int row,int col);
int transpose(int matrix[12][12],int row,int col,int trans_matrix[12][12]);
int printmatrix(int row,int col,int trans_matrix[12][12]);
int main(){
    int row,col;
    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    printf("Enter the number of columns:\n");
    scanf("%d",&col);
    int matrix[12][12];
    int trans_mattrix[12][12];
    readinput(matrix[12][12],row,col);
    transpose(matrix[12][12],row,col,trans_mattrix[][12]);

    
}
int readinput(int matrix[][12],int row,int col){
    for(int i = 0;i<row;i++){
        for(int j = 0;i<col;j++){
            scanf("%d",&matrix[i][j]);     
        }
    }
}
int transpose(int matrix[][12],int row,int col,int trans_matrix[][12]){
    for(int i = 0;i<row;i++){
        for(int j = 0;i<col;j++){
            trans_matrix[i][j] = matrix[j][i];
        }
    }

}
int printmatrix(int row,int col,int trans_matrix[][12]){
    for(int i = 0;i<row;i++){
        for(int j = 0;i<col;j++){
            printf("%d",trans_matrix[i][j]);
        }
    }
}