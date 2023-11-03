#include<stdio.h>
int main()
{
    int q,r,A,P;
    printf("ENTER THE QUANTITY: ");
    scanf("%d",&q);
    printf("ENTER RATE: ");
    scanf("%d",&r);
    A=q*r;
    if(A>=1000)
    {
        P=A-((A*10)/100);
        printf("PAYABLE AMOUNT: %d",P);
    }
    else
    {
        printf("PAYABLE AMOUNT: %d",A);
    }
    return 0;
}