/*
*  *  *  * * 

* A B C * 

* D E F * 

* G H I  * 

*  *  * *  *

*/
#include<stdio.h>
int main(){
    int n=5,i,j,ch=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || j==5 || i==5)
            printf("*");
            else
            printf("%c",ch++);
        }
    
        printf("\n");
    }
}
