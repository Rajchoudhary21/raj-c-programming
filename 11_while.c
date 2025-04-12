//wap to print table of given num
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
      printf("%d * %d = %d\n",n,i,i*n);
        i++;
    }
}