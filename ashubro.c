#include <stdio.h>
main()
{
    int i,n,f1,f2,f3;
    f1=0;
    f2=1;
    printf("Enter the value");
    scanf("%d",&n);
    printf("%d%d",f1,f2);
    for(i=0;i<n;++i){
        f3=f1+f2;
        f1=f2;
        f2=f3;
    printf("%d",f3);
    }
}