//6. Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    switch(year%100==0)
    {
    case 1:
        switch(year%400==0)
        {
            case 1:
                printf("leap year");
                break;
            case 0:
                printf("not leap year");
                break;
        } 
            break;
    case 0:
        switch(year%4==0)
        {
            case 1:
                printf("leap year");
                break;
            case 0:
                printf("not leap year");
                break;
        } 
            break;

    
    
    }
        return 0;
}