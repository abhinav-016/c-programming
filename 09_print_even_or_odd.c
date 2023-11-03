#include<stdio.h>
void main()
{
    int a;
    printf("ENTER A NUMBER: ");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("THE GIVEN NUMBER IS EVEN");
    }
    else
    {
        printf("THE GIVEN NUMBER IS ODD");
    }
}