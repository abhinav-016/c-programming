#include<stdio.h>
void main()
{
    float S,A;
    int P,R,T;
    printf("ENTER PRINCIPLE VALUE: ");
    scanf("%d", &P);
    printf("ENTR RATE OF INTEREST: ");
    scanf("%d", &R);
    printf("ENTER TIME PERIOD: ");
    scanf("%d", &T);
    S=(P*R*T)/100;
    A=P+S;
    printf("SIMPLE INTEREST: %0.1f", S);
    printf("\nMATURITY AMOUNT: %0.1f", A);
}