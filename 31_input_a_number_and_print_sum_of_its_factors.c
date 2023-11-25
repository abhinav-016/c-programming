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
    printf("%d",sum);
}