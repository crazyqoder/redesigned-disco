#include <stdio.h>
#include<math.h> 
 int main(void)
 {
      int start,end,i,j=0,ev[100];
      scanf("%d\t%d\n",&start,&end);
      for(i=start;i<=end;i++)
      {
       if(i%2==0)
       {
         ev[j]=i;  
                  
         j++;  
       }
       
      }
     for(j=0;ev[j]!='\0';j++)
     printf("%d\n",ev[j]);
 }
