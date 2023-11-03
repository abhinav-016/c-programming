#include<stdio.h>
void main()
{
    int a,S,C;
    printf("ENTER NUMBER: ");
    scanf("%d", &a);
    if(a%2==0)
    {
        S=a*a;
        printf("SQUARE OF a: %d",S);
    }
    else
    {
        C=a*a*a;
        printf("CUBE OF a: %d",C);
    }
}