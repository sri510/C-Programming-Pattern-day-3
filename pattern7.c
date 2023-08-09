/*
55555
54444
54333
54322
54321
*/
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
            if(i>=j)
            printf("%d",i);
            else
            printf("%d",j);
        }
        printf("\n");
    }
}
