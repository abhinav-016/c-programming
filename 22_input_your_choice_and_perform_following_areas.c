#include<stdio.h>
void main()
{
    int r,l,b,B,H,ch;
    float Area;

    printf("1 for Area of Circle\n");
    printf("2 for Area of Rectangle\n");
    printf("3 for Area of Triangle\n");

    printf("Enter your Choice");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: {
        printf("Enter your Radius: ");
        scanf("%d",&r);

        Area = 3.14*r*r;
        printf("Area of Circle: %0.2f",Area);
        break;}
    case 2: {
        printf("Enter your Length: ");
        scanf("%d",&l);
        printf("Enter your Breadth: ");
        scanf("\n%d",&b);
        
        Area = l*b;
        printf("Area of Rectangle: %0.2f",Area);
        break;}
    case 3: {
        printf("Enter your Base: ");
        scanf("%d",&B);
        printf("Enter your Height: ");
        scanf("\n%d",&H);

        Area = 0.5*B*H;
        printf("Area of Triangle: %0.2f",Area);
        break;}
    default: printf("Wrong Choice");
    }
}