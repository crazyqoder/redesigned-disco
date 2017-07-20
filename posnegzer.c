#include <stdio.h>

int main(void)
{
    long int number;
    printf("enter a number");
    scanf("%d",&number);
    if(number<0)
       printf("negative");
    else if(number>0)
       printf("positive");
    else
       printf("zero");

	return 0;
}
