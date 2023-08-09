/*
11111
10001
10001
10001
11111
*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==n || j==1 || i==n)
            printf("1");
            else
            printf("0");
        }
    
    printf("\n");    
    }
}
