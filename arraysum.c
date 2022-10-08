#include<stdio.h>
int sum(int);
int main(){
	register int i;
	int fresult,num[] = {1,2,3,4,5,6};
	for(i=0;i<=5;i++){
		fresult =  sum(num[i]);
	}
	printf("%d",fresult);
}

int sum(int num){
	//	static int sum;
    auto int sum;
    printf("%d\n",sum);
	// it works even when i only do int and not static which confuses me as the stack spot for sum should be cleared out for every function call for a variable of storage class auto
	sum = sum + num;
    return sum;
}