#include<stdio.h>
void main()
{
    int a,b,c,ch;
    printf("1 for ADDITION\n");
    printf("2 for SUBTRACTION\n");
    printf("3 for MULTIPLICATION\n");
    printf("4 for DIVISION\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    switch (ch)
    {
        case 1: c=a+b;
    printf("Sum of two numbers: %d",c);
        break;
        case 2: c=a-b;
    printf("Subtraction of two numbers: %d",c);
        break;
        case 3: c=a*b;
    printf("Multiplication of two numbers: %d",c);
        break;
        case 4: c=a/b;
    printf("Division of two numbers: %d",c);
        break;
    default: printf("Wrong Choice");
        break;
    }
}