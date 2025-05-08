//wap to check given num is plindrome num or not
#include<stdio.h>
void main()
{
    int num,rem,sum=0,on;
    printf("enter the num :");
    scanf("%d",&num);
    on=num;
    while(num>0)
    {
        rem = num%10;
        sum = sum*10+rem;
        num = num/10;
    }
    if(on==sum)
    {
        printf("plindrome number");
    }
    else
    {
        printf("not plindrome num");
    }
}