/*
E	J	O	T	Y

D	I	N	S	X

C	H	M	R	W	

B	G	L	Q	V

A	F	K	P	U
*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=n;i>=1;i--)
    {
        int r=i;
        for(j=1;j<=n;j++)
        {
            printf("%4c",r+64);
            r+=n;
        }
    
        printf("\n");
    }
}
