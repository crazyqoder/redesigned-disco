#include<stdio.h>
void main()
{
    int num,fact=1;
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
