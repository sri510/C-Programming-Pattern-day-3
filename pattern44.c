/*
1

1 2

1 2 3

1 2  3 4 

1 2 3

1 2

1

*/
#include <stdio.h>
 
int main()
{
    int n=4,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    
        printf("\n");
    }
    for(k=3;k>=1;k--)
    {
        for(int l=1;l<=k;l++)
        {
            printf("%d",l);
        }
    
        printf("\n");
    }
 
    return 0;
}
