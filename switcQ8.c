//.8. Program to convert a positive number into a negative number and negative number  int0 positive number

#include<stdio.h.>
int main()
{
    int x,number;
    printf("Enter any integer number\n");
    scanf("%d",&x);
    switch(x<0)
    {
       case 1:
            number=x*(-1);
            printf("positive %d",number);
            break;
       case 0:
            number=x*(-1);
            printf("negative %d",number);
            break;

    }
    
    return 0;
}