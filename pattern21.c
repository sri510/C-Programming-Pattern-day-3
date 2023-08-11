/*
1 2 3 4 5

   1 2 3 4

      1 2 3

         1 2

            1
*/
#include<stdio.h>
int main(){
    int n=5,i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=n-1;j>=i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("%2d",k);
        }
        printf("\n");
    }
    
}
