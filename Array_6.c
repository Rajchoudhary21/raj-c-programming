//wap to find maximum num and minimum num from array
#include<stdio.h>
void main()
{
int i,array[5] = {20,56,78,44,58};
printf("array elements are : ");
for(i=0;i<5;i++)
{
    
    printf("%d ",array[i]);

}
int max = array[0];
for(i=0;i<5;i++)
{
    if(max < array[i])
    {
        max = array[i];
    }

}
printf("\nmaximum num in array : %d",max);
int min = array[0];
for(i=0;i<5;i++)
{
    if(min > array[i])
    {
        min = array[i];
    }

}
printf("\nminimum num in array : %d",min);

}