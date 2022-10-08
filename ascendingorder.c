#include<stdio.h>
#include<string.h>
void reorder(int,char x[][12]);
main()
{
	int i,n=0;
	char x[10][12];
	printf("Enter each string on a separate line below\n\n");
	printf("type \'END\' when finished\n");
	do{
		printf("string %d: ",n+1);
		scanf("%s",x[n]);
	}
	while(strcmp(x[n++],"END"));
	n--;
	reorder(n,x);
	printf("\n\n Reorder list of string: \n");
	for(i=0;i<n;++i){
		printf("\n\n String %d:%s",i+1,x[i]);


	}
}
void reorder(int n,char x[][12]){
	char temp[12];
	int i,item;
	for(item=0;item<n-1;item++){
		for(i=item+1;i<n;++i){
		if(strcmp(x[item],x[i])>0){	
			strcpy(temp,x[item]);
			strcpy(x[item],x[i]);
			strcpy(x[i],temp);
			}		
		}
	}
}