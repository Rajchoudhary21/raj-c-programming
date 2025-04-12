//wap to print square 1 to n 
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("square of %d = %d\n",i,i*i);
        i++;
    }
}