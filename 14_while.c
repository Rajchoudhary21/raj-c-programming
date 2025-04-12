//wap to check 5 in given number or not and also count how many times 5 appear....
#include<stdio.h>
void main()
{
    int rem,n,c;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        if(rem == 5)
    {c++;}
         n = n/10;
    }
      if(c>0)
      {
        printf("5 is appear %d time\n",c);
      }else
      {
        printf("5 is not found");
      }
   }