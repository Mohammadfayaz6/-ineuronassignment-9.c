//3. Write a program which takes the day number of a week and displays a
//unique greeting message for the day

#include<stdio.h>
int main()
{ 
    int day;
    printf("Enter any month\n");
    scanf("%d",&day);
    printf("day=%d\n",day);
    switch (day)
    {
    case 1:
        printf("the working day");
        break;
    case 2:
        printf("a new day");
        break;
    case 3:
        printf("its a gorgeous day");
        break;
    case 4:
        printf("its a sunny day");
        break;
    case 5:
        printf("its a good day");
        break;
    case 6:
         printf("its a weekend day ");
         break;  
    case 7:
        printf("its a funday");
          break;
    
    default:
        printf("invalid day");
        break;
    }
    return 0;
}