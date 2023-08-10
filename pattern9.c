/*
1	 10	  11    20	  21

2	 9		12    19    22

3	 8		13    18    23

4   7		14    17    24

5	  6		15	  16    25 
*/
#include<stdio.h>
int main(){
    int n=5,x,y,i,j;
    for(i=1;i<=n;i++)
    {
        x=i,y=n-i+1;
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
