/*
1 2 3 4 5 6 7 8 9

1 2 3 4 5 6 7

1 2 3 4 5

1 2 3

1

*/
#include <stdio.h>
int main() {
   
   int n=9,i,j;
   for(i=n;i>=1;i-=2)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d",j);
       }
   
       printf("\n");
   }
   
   return 0;
}
