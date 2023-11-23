#include<stdio.h>
void main()
{
    int c,p,u,Amount;
    printf("ENTER THE CURRENT UNITS: ");
    scanf("%d",&c);
    printf("ENTER THE PREVIOUS UNITS: ");
    scanf("\n%d",&p);
    u=c-p;
    if(u<=100)
    {
        Amount=u*4+180;
    }
    else if(u<=200)
    {
        Amount=100*4+(u-100)*5+180;
    }
    else
    {
        Amount=100*4+100*5+(u-200)*6+180;
    }
    printf("PAYABLE AMOUNT: %d",Amount);
}