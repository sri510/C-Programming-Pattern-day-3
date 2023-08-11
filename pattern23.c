/*
1

A B

2 3 4

C D E F

5 6 7 8 9

*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    int c=1,ch=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%2c",ch++);
            }
        
            else
            printf("%2d",c++);
        }
    
        printf("\n");
    }
}
