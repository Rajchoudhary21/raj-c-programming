//wap to check giv num is div by 3 , 4 , 5
#include<stdio.h>
void main()
{
int num;
printf("enter the num : ");
scanf("%d",&num);
if(num%3==0 && num%4==0 & num%5==0)
{
    printf("%d is div by 3,4,5",num);
}
else if(num%3==0 && num%4==0)
{
    printf("%d is div by 3,4",num);

}
else if(num%3==0 && num%5==0)
{
    printf("%d is div by 3,5",num);

}
else if(num%4==0 && num%5==0)
{
    printf("%d is div by 4,5",num);

}
else if(num%3==0)
{
    printf("%d is div by 3",num);

}
else if(num%4==0)
{
    printf("%d is div by 4",num);

}
else if(num%5==0)
{
    printf("%d is div by 5",num);

}
else{
    printf("num is not divisible");
}
}