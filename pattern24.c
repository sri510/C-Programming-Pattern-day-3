/*
1 2 3 4 5

  A B C D

      6 7 8

         E F

            9

*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    int c=1,ch=65;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("  ");
        }
            for(int k=1;k<=i;k++)
            {
                if(i%2==0)
                printf("%2c",ch++);
                else
                printf("%2d",c++);
            }
    
        printf("\n");
    }
}
