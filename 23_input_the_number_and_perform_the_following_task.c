#include<stdio.h>
void main()
{
    int a,b,c,ch;
    int A,B,C;
    printf("1 for the largest from two\n");
    printf("2 for the largest from three\n");
    printf("3 for even or odd\n");

    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            if(a>b)
            {
            printf("%d",a);
            }
            else
            {
            printf("%d",b);
            }
            break;
    case 2: printf("Enter three number: ");
            scanf("%d%d%d",&A,&B,&C);
            if(A>=B && A>=C)
            {
                printf("%d is the largest",A);
            }
            else if(B>=C && B>=A)
            {
                printf("%d is the largest",B);
            }
            else
            {
                printf("%d is the largest",C);
            }
            break;
    case 3: printf("Enter a number: ");
            scanf("%d",&c);
            if(c%2==0)
            {
                printf("%d is even",c);
            }
            else
            {
                printf("%d is odd",c);
            }
            break;
    default: printf("Wrong Choice");
    }    
}