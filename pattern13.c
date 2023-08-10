/*
A	B	C	D	E

B	C	D	E	F

C	D	E	F	G

D	E	F	G	H

E	F	G	H  I
*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3c",(i+j)+65);
        }
    
        printf("\n");
    }
}
