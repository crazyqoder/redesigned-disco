#include<stdio.h>
void main()
{
 int num1,num2,num3;
 printf("enter the three numbers");
 scanf("%d%d%d",&num1,&num2,&num3);
 if((num1>num2)&&(num3<num2))
 printf("num1 is largest:%d",num1);
 else if((num2>num3)&&(num3>num1))
 printf("num2 is largest:%d",num2);
 else
 printf("num3 is largest:%d",num3);
}
