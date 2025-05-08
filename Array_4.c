//wap to find sum array elements
#include<stdio.h>
void main()

{
    int n,sum=0;
    printf("enter the array size : ");
    scanf("%d",&n);
    int i,array[n];
    for(i=0;i<n;i++)
    {
        printf("enter the array element array[%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("array elements are : \n");
    for(i=0;i<n;i++)
{
    
    printf("%d ",array[i]);

}
for(i=0;i<n;i++)
{
    sum = sum + array[i];
}
printf("array elements sum = %d ",sum);

}