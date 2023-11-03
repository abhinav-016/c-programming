#include<stdio.h>
int main()
{
    float net;
    int s,da,ta,hra;
    printf("ENTER YOUR SALARY: ");
    scanf("%d",&s);
    if(s>=20000)
    {
        da=s*15.0/100.0;
        ta=s*18.0/100.0;
        hra=s*25.0/100.0;
    }
    else if(s>=10000)
    {
        da=s*12.0/100.0;
        ta=s*15.0/100.0;
        hra=s*22.0/100.0;
    }
    else if(s>=5000)
    {
        da=s*10.0/100.0;
        ta=s*12.0/100.0;
        hra=s*20.0/100.0;
    }
    else
    {
        da=s*8.0/100.0;
        ta=s*10.0/100.0;
        hra=s*15.0/100.0;
    }
    net=s+da+ta+hra;
    printf("PAYABLE AMOUNT: %0.2f",net);
}