#include<stdio.h>
void swap(int*,int*);
int main(){
    int i,j,arr[] = {22,34,12,15,166,34,98,76,45};
    for(j=0; j<8; j++){
        for (i=0; i<8; i++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
    }
    }
   
    for (i=0; i<9; i++){
        printf(" %d ",arr[i]);
    }
    
}
void swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}