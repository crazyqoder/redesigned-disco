#include<stdio.h>
void main()
{
    int num,fac=1;
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        fac=fac*i;
    }
    printf("%d",fac);
}
