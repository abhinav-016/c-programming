//input a number and check whether number is perfetc or not
//6=1+2+3; 28=1+2+4+7+14
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Sum of factors of %d: ",n);
    
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
        {
            printf("PERFECT NUMBER");
        }
    else
        {
            printf("NOT PERFECT NUMBER");
        }
}