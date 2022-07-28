//9. Program to Convert even number into its upper nearest odd number
//Switch Statement.

#include<stdio.h>
int main()
{
    int x;
    printf("enter any number\n");
    scanf("%d",&x);
    switch (x%2==0)
    {
    case 1:
         x++;
         printf(" %d odd numbers ",x); 
         break;
    case 0:
         printf(" %d odd number",x);
         break;
    }
    return 0;
}