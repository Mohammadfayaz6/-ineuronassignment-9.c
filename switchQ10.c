//10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    float d,a,b,c,root1,root2,imaginary,i;
    printf("enter three number\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    printf("discriminant= %f\n",d);
    switch(d>0)
    {
        case 1:
        root1=-b+sqrt(d)/2*a;
        root2=-b-sqrt(d)/2*a;
        printf("two distinct and real roots exist %f and %f\n",root1,root2);
        break;
        
        case 0:
        switch(d<0)
        {
            case 1:
            root1=root2=-b/2*a;
            imaginary=i*sqrt(-d)/2*a;
            printf("two distinct complex roots exists %f and %f\n",root1+imaginary,root2-imaginary);
            break;

            case 0:
                root1=root2=-b/2*a;
                printf("two real and equal roots exist %f and %f\n",root1 ,root2);
                break;
            
        } break;
        
    } 
  
     return 0;
}

