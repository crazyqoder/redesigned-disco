#include <stdio.h>
#include<string.h>
int main(void)
{
    char str[50];
    int len,i;
    printf("enter a string\n");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
        printf("%c - vowel\n",str[i]);
        else
        printf("%c - consonant\n",str[i]);
    }
    return 0;
    
}
