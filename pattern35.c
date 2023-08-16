/*
         A
       A B C
     A B C D E
    A B C D E F G
  A B C D E F G H I
*/
#include <stdio.h>
 
int main()
{
  
  int n=9,i,j,k;
  for(i=1;j<=n;i+=2)
  {
      for(k=i;k<=n;k++)
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          printf("%c ",j+64);
      }
  
      printf("\n");
  }
  
    return 0;
}
