/* 11011
   11011
   00000
   11011
   11011 */
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==3 || j==3 )
            printf("0");
            else
            printf("1");
            
        }
    
    printf("\n");
    }
        
    }
