//1. Write a program which takes the month number as an input and display
//number of days in that month.

#include<stdio.h>
int main()
{ 
    int month;
    printf("Enter any month\n");
    scanf("%d",&month);
    printf("month=%d\n",month);
    switch (month)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28/29 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
         printf("30 days");
         break;  
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;  

    default:
        printf("invalid month");
        break;
    }
    return 0;
}