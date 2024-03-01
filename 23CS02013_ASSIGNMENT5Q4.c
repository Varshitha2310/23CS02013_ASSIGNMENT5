#include<stdio.h>
int main(){
    int n;
    printf("enter the size:");
    scanf("%d",n);

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        
         {   if (j<n-i-1)
            printf(" ");
            else
            printf("* ");
        }
        printf("\n");
    }
        return 0;
    }
    
