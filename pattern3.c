/*
12345
23456
34567
45678
56789
*/
#include<stdio.h>
int main(){
    int n=5,i,j,k=1;
    for(i=0;i<n;i++)
    {
        k=i+1;
        for(j=1;j<=5;j++)
        {
            printf("%d",k);
            k++;
        }
    printf("\n");
}
}
