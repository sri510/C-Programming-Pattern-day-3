/*
5

4 4

3 3 3

2 2 2 2

1  1  1  1  1

*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%3d",i);
        }
    
        printf("\n");
    }
}
