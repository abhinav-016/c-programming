#include<stdio.h>
int main()
{
    int A,c;//b-balance r-rent f-free c-calls
    printf("ENTER NUMBER OF CALLS: ");
    scanf("%d",&c);
    if(c<=100)
    {
        A=120;
    }
    else if(c<=200)
    {
        A=(100*0)+((c-100)*1)+120;
    }
    else
    {
        A=(100*0)+((100)*1)+((c-200)*2)+120;
    }
    printf("PAYABLE AMOUNT: %d",A);
}