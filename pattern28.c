/*
5 6 7 8 9

4 5 6 7

3 4 5

2 3

1

*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",n+j-i);
        }
    
        printf("\n");
    }
}
