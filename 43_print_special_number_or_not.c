//123=1+2=3
//1236=1+2+3=6
#include<stdio.h>
int main()
{
    int x,n,b,sum=0;

    printf("Enter Number : ");
    scanf("%d",&n);

    x=n%10;
    n=n/10;
    
    while(n!=0)
    {
        b=n%10;
        sum+=b;
        n/=10;
    }
     if(sum==x)
    {
        printf("SPECIAL NUMBER");
    }
    else
    {
        printf("NOT SPECIAL NUMBER");
    }
}