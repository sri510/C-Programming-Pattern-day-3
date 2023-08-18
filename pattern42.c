/*
  E D C B A

    D C B A 

      C B A

		    B A

          A
*/
#include <stdio.h>
int main() {
   
   int n=5,i,j,k;
   for(i=n;i>=1;i--)
   {
       for(k=i;k<=n;k++)
       {
           printf("  ");
       }
       for(j=i;j>=1;j--)
       {
           printf("%c ",j+64);
       }
   
       printf("\n");
   }
   
   return 0;
}

