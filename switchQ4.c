/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/

#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    while(1)
 {
    int x,y,z,num;
    printf("...................MENU...........................\n");
    printf("\n1.To check length of an isosceles triangle or not ");
    printf("\n2.To check length of sides of a right angled triangle or not ");
    printf("\n3.To check equilateral triangle or not");
    printf("\n4.exit\n");
    printf("enter your choice\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Enter three numbers\n");
        scanf("%d%d%d",&x,&y,&z);
          if(x==y || y==z || z==x)
           {
            printf("isosceles triangle\n");
           }
           else
           {
             printf("not isosceles triangle\n");
           }

        break;

     case 2:
        printf("Enter three numbers\n");
        scanf("%d%d%d",&x,&y,&z);
          if(x*x+y*y==z*z || y*y+z*z==x*x || z*z+x*x==y*y)
           {
            printf("right angled triangle\n");
           }
           else
           {
             printf("not right angled trianle\n");
           }

        break;

     case 3:
        printf("Enter three numbers\n");
        scanf("%d%d%d",&x,&y,&z);
          if(x==y && y==z)
           {
            printf("equilateral triangle\n");
           }
           else
           {
             printf("not equilateral  triangle\n");
           }

        break;

     case 4:
         exit(0);

     default:
         printf("invalid choice\n");
    
    }
         printf("\n");
 }  
      return 0;
}