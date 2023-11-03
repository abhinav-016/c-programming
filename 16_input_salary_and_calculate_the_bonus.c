#include<stdio.h>
#include<math.h>
int main()
{
    float net;
    int s;
    printf("ENTER YOUR SALARY: ");
    scanf("%d",&s);
    if(s>=20000)
    {
        net=s+s*(40.0/100.0);
        printf("YOUR NET SALARY: %0.2f", net);
    }
    else if(s<20000&&s>=10000)
    {
        net=s+s*(50.0/100.0);
        printf("YOUR NET SALARY: %0.2f", net);
    }
    else if(s<10000&&s>=5000)
    {
        net=s+s*(60.0/100.0);
        printf("YOUR NET SALARY: %0.2f", net);
    }
    else
    {
        net=s+s*(70.0/100.0);
        printf("YOUR NET SALARY: %0.2f", net);
    }
    return 0;
}