//wap to print cube 1 to n
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("cube %d = %d\n",i,i*i*i);
        i++;
    }
}