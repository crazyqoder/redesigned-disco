#include<stdio.h>
#include<string.h>
void main()
{
   char line[100];
   int i,count=0,len;
   gets(line);
   len=strlen(line);
   for(i=0;i<len;i++)
   {
    if(line[i]!=' ')
    count++;
   }
    printf("%d",count);
}
