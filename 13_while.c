//wap to print sum of individual odd digit of given number
#include<stdio.h>
void main ()
{
    int n,sum=0,rem;
    printf("enter the num : ");
    scanf("%d",&n);
while(n>0)
{
    rem = n%10;
    if(rem%2==1)
    {
        sum = sum + rem;
    }
    n = n/10;
}
printf("sum of individual odd digit  num %d",sum);

}