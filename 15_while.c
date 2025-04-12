//wap to print given number in revrse order
#include<stdio.h>
void main()
{
int n,rem,r=0;
printf("enter the number : ");
scanf("%d",&n);
while(n>0)
{
    rem = n%10;
    r=r*10+rem;
    n=n/10;
}
printf("reverse order : %d",r);
}