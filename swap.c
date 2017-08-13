#include<stdio.h>
void main()
{
   int num1,num2,temp;
    scanf("%d%d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    
   printf("%d%d",num1,num2);
}
