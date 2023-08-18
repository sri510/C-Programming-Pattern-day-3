/*
5 4 3 2 1

1 2 3 4

5 4 3 

1 2

5
*/
#include <stdio.h>
int main() {
 
 int n=5,i,j;
 for(i=1;i<=n;i++)
 {
     int k=1;
     for(j=n;j>=i;j--)
     {
         if(i%2==0)
         {
             printf("%d ",k++);
         }
         if(i%2==1)
         {   
         printf("%d ",j);
         }
     } 
 
     printf("\n");
 }
  
   return 0;
}
