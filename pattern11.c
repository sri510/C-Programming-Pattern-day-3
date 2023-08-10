/*
5   6   15   16   25

4	 7   14   17   24

3   8   13   18   23

2   9   12   19   22

1  10  11   20   25
  */
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=n;i>=1;i--)
    {
        int x=i,y=n-i+1;
        for(j=1;j<=n;j++)
        {
            if(j%2==0)
            printf("%4d",y);
            else
            printf("%4d",x);
            x+=n;
            y+=n;
        }
        printf("\n");
    }
}
