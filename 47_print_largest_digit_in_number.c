// 17865: Largest = 8
#include<stdio.h>
int main()
{
    int n,gr,b;

    printf("Enter the number: ");
    scanf("%d",&n);

    gr=n%10;

    while(n!=0)
    {
        b=n%10;
        if(gr<b)
        {
            gr=b;
        }
        n=n/10;
    }
    printf("Largest digit in given number is %d",gr);
}