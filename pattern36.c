/*
  	 	    1       

   	 	   2 2   

   	 	 3 3 3   

        4 4 4 4  

      5 5 5 5 5  

     6 6 6 6 6 6  

   7 7 7 7 7 7 7 

 8 8 8 8 8 8 8 8

9 9 9 9 9 9 9 9 9

*/
#include <stdio.h>
int main()
{
   int n=9,i,j,k;
   for(i=1;i<=n;i++)
   {
       for(k=i;k<=n;k++)
       {
           printf(" ");
       }
       for(j=1;j<=i;j++)
       {
           printf("%d ",i);
       }
   
       printf("\n");
   }   
   
   return 0;
}
