/*
 A B C D E

     A B C D

        A B C

            A B

               A
*/
#include<stdio.h>
int main(){
    int n=5,i,j,k,ch;
    for(i=n;i>=1;i--)
    {
        ch=65;
        for(j=n-1;j>=i;j--)
        printf("  ");
        
            for(k=1;k<=i;k++){
                
            printf("%2c",ch++);
            }
        
    
        printf("\n");
    }
}
