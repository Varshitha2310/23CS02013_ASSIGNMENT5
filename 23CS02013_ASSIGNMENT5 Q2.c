#include<stdio.h>
int main(){
    int a,b,count;
    printf("enter the dividend and divisor:");
    scanf("%d %d",&a,&b);
    while(a>=b)
    {
        a=a-b;
        count++;
    }
    printf("the quotient and remainder are %d,%d",count,a );
    return 0;
}