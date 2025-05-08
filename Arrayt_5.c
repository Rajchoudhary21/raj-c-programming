//wap to find sum array elements and check sum is even or odd
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
    printf("array elements are : ");
    for(i=0;i<n;i++)
{
    
    printf("%d ",array[i]);

}
for(i=0;i<n;i++)
{
    sum = sum + array[i];
}
printf("\narray elements sum = %d \n",sum);

if(sum%2==0)
{
    printf("sum is even..");
}
else{
    printf("sum is odd..");
}

}