/*
12345
21234
32123
43212
54321
*/
#include<stdio.h>
int main(){
    int n=5, i, j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>j)
            printf("%d",(i-j)+1);
            else
            printf("%d",(j-i)+1);
        }
    
        printf("\n");
    }
}
