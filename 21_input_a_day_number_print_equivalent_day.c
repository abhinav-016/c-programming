#include<stdio.h>
void main ()
{
    int a,ch;
    printf("1 for Monday \n");
    printf("2 for Tuesday \n");
    printf("3 for Wednesday \n");
    printf("4 for Thursday \n");
    printf("5 for Friday \n");
    printf("6 for Saturday \n");
    printf("7 for Sunday \n");
    printf("Enter your Choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:{
            printf("Monday");
            break;
        }
        case 2:{
            printf("Tuesday");
            break;
        }
        case 3:{
            printf("Wednesday");
            break; 
        }
        case 4:{
            printf("Thursday");
            break;
        }
        case 5:{
            printf("Friday");
            break;
        }
        case 6:{
            printf("Saturday");
            break;
        }
        case 7:{
            printf("Sunday");
            break;
        }
        default: printf("Wrong Choice");
       
    }

}