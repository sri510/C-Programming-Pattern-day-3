/*
5 4 3 2 1

5 4 3 2

5 4 3

5 4

5
*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%2d",j);
        }
    
        printf("\n");
    }
}
