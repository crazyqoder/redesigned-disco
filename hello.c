#include<stdio.h>
#include<string.h>
void main()
{
    char word[50];
    int len,i,j;
    gets(word);
    len=strlen(word);
    for(i=0;i<len;i++)
    {
        for(j=0;word[j]!='\0';j++)
        {
            printf("%c",word[j]);
        }
        printf("\n");
    }
}
