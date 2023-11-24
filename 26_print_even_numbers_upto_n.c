#include<stdio.h>
int main ()
{
    int i,n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    for(i=2;i<=n;i+=2)
    {
        printf("%d\t",i);
    }
}