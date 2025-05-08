//wap to take array element from usder and print array element
#include<stdio.h>
void main()

{
    int n;
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

}