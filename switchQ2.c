/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/

#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int a,b,x;
    while(1)
 {
    printf("\n");
    printf("------------------------------ MENU------------------------------------\n");
    printf("\n1.addition");
    printf("\n2.substractio");
    printf("\n3.multiplication");
    printf("\n4.division");
    printf("\n5.exit\n");
    printf("Enter your choice\n");
    scanf("%d",&x);
      switch(x)
    {
        case 1:
            printf("enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("sum is %d\n",a+b);
            break;

         case 2:
            printf("enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("substract is %d\n",a-b);
            break;
         case 3:
            printf("enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("product is %d\n",a*b);
            break;
         case 4:
            printf("enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("division is %d\n",a/b);
            break;
         case 5:
            exit(0);
          
         default:
            printf("invalid choice");
      
      
    }
    printf("\n");

         
    

 }
    return 0;

} 