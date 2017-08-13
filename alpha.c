#include<stdio.h>
void main()
{
char alp[50];
int i;
gets(alp);
for(i=0;alp[i]!='\0';i++)
{
if(((alp>='a')&&(alp<='z'))||((alp>='A')&&(alp<='Z')))
 printf("it is alphabet");
 else
 printf("not an alpha");
 }
}
