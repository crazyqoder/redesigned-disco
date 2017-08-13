#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int len;
    gets(str);
    len=strlen(str);
    for(int i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
}
