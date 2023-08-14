/*
17 18 19 20

14 15 16

12 13

11
*/
#include<stdio.h>
int main(){
    int n=4,i,j,k=n*n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",++k);
        }    
        k=k-(2*i)+1;
        printf("\n");
    }
}
