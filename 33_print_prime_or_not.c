#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,f=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is not a Prime Number",n);
    }
    
}