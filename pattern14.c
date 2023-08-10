/*
A	F	K	P	U

B	G	L	Q	V

C	H	M	R	W

D	I	N	S	X

E	J	O	T	Y

*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        int r=i;
        for(j=0;j<n;j++)
        {
            printf("%4c",65+r);
            r+=n;
        }
    
        printf("\n");
    }
}
