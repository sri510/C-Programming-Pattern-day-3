/*
5 4 3 2 1

6 5 4 3

7 6 5

8 7

9
*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",n-j+i);
        }
    
        printf("\n");
    }
}
