/*
1

2 4

3 6 9

4 8 12 16

5 10 15 20 25

*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",i*j);
        }
    
        printf("\n");
    }
}
