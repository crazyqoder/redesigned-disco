#include <stdio.h>
#include<math.h> 
 int main(void)
 {
      int start,end,i,j=0,odd[100];
      scanf("%d\t%d\n",&start,&end);
      for(i=start;i<=end;i++)
      {
       if(i%2!=0)
       {
         odd[j]=i;  
                  
         j++;  
       }
       
      }
     for(j=0;odd[j]!='\0';j++)
     printf("%d\n",odd[j]);
 }
