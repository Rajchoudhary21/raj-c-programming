//wap to print 1 to n numbers
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}