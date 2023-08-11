/*
1

3   5

7   9  11

13 15  17  19

21 23 25 27 29

*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    int k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",k);
            k+=2;
        }
    
        printf("\n");
    }
}
