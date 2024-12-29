#include<stdio.h>
#include<string.h>
int add(int x, int y)
{
    int z=x+y;
    return z;
}
int decrement(int x, int y)
{
    int z=x-y;
    return z;
}
int multiplication(int x, int y)
{
    int z=x*y;
    return z;
}
int division(int x, int y)
{
    int z=x/y;
    return z;
}
int parcentage(int x, int y)
{
    float z= x*y/100;
    return z;
}
int main()
{
    int choice,sum1,dec,multi,dev;
    float per;
    int num1,num2;
    printf(" press 1 for add\n ");
    printf("press 2 for decrement\n ");
    printf("press 3 for multiplie\n ");
    printf("press 4 for devided\n ");
    printf("press 5 for parcentage\n ");
    printf("press 0 for exit\n ");
    scanf("%d",&choice);
    // printf("enter first number");
    // scanf("%d", &num1);
    // printf("enter second number");
    // scanf("%d", &num2);
    switch(choice)
    {
        case 1:
        printf("enter first number");
        scanf("%d", &num1);
        printf("enter second number");
        scanf("%d", &num2);
        sum1 =  add(num1,num2);
        printf("addition of %d and %d is %d",num1,num2,sum1);
        break;
        
        case 2:
        printf("enter first number");
        scanf("%d", &num1);
        printf("enter second number");
        scanf("%d", &num2);
        dec = decrement(num1,num2);
        printf("decrement of %d and %d is %d",num1,num2,dec);
        break;
        
        case 3:
        printf("enter first number");
        scanf("%d", &num1);
        printf("enter second number");
        scanf("%d", &num2);
        multi =  multiplication(num1,num2);
        printf("multiplication of %d and %d is %d",num1,num2,multi);
        break;
        
        case 4:
        printf("enter first number");
        scanf("%d", &num1);
        printf("enter second number");
        scanf("%d", &num2);
        dev= division(num1,num2);
        printf("division of %d and %d is %d",num1,num2,dev);
        break;
        
        case 5:
        printf("enter first number");
        scanf("%d", &num1);
        printf("enter second number");
        scanf("%d", &num2);
        per=parcentage(num1,num2);
        printf("parcentage of %d and %d is %f",num1,num2,per);
        break;
        
        case 0:
        printf("you are EXIT");
        break;
    }
    
    return 0;
    
    
}