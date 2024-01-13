#include<stdio.h>
void main()
{
    int ch,op;
    float a,b,c;
    
    do
    {
        printf("1 for addition\n");
        printf("2 for subtraction\n");
        printf("3 for multiplication\n");
        printf("4 for division\n");

        printf("Enter Your Choice: ");
        scanf("%d",&ch);

        printf("Enter Two Number: ");
        scanf("%f %f",&a,&b);

        switch (ch)
        {
        case 1: c=a+b;
                printf("Addition of Two Numbers : %0.2f\n",c);
                break;
        case 2: c=a-b;
                printf("Subtraction of Two Numbers : %0.2f\n",c);
                break;
        case 3: c=a*b;
                printf("Multiplication of Two Numbers : %0.2f\n",c);
                break;
        case 4: c=a/b;
                printf("Division of Two Numbers : %0.2f\n",c);
                break;
        default:
                printf("Wrong Choice\n");
                break;
        }
        printf("Do you want to continue, Press 1/0: ");
        scanf("%d",&op);
    }
    while(op==1);
}