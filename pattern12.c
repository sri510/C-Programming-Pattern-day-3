/*
1	3	 5	   7    9

3	5	 7	   9   11

5	7	 9	  11  13

7	9  11  13  15

9 11 13  15  17
  */
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
         printf("%4d",(2*(i+j))-3);
        }
        printf("\n");
    }
}
