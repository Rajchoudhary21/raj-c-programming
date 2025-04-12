//wap to print sum of even individual given number 
#include<stdio.h>
void main()
{
    int sum=0,n,rem;
     printf("enter the num : ");
     scanf("%d",&n);
     
     while(n>0)
     {
        rem = n % 10;
        if(rem % 2 == 0)
        {
            sum = sum + rem;
           
        }
        n = n/10;
       
        
     }
     printf("sum of even num %d",sum);

}