/*
1 2 3 4 5

 * * * *

1 2 3

 * *

1 
*/
#include <stdio.h>
int main() {
  int n=5,i,j;
  for(i=n;i>=1;i--)
  {
      for(j=1;j<=i;j++)
      {
          if(i%2==1)
          printf("%d",j);
          else
          printf("*");
      }
  
      printf("\n");
  }
   return 0;
}
