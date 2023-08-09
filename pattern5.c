/*
12345
23455
34555
45555
55555
*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==n+1)
            printf("%d",n);
            else if(i+j<n+1)
            printf("%d",(j+i)-1);
            else
            printf("%d",n);
        }
    
        printf("\n");
    }
}
