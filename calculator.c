#include<stdio.h>
int main()
{
    float a,b;
    char op;

    printf("enter first number: ");
    scanf("%f",&a);
    printf("enter operator (+, -, *, /): ");
    scanf(" %c",&op);
    printf("enter second number: ");
    scanf("%f",&b);

    switch(op)
    {
        case '+':
            printf("%.2f + %.2f = %.2f",a,b,a+b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",a,b,a-b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",a,b,a*b);
            break;
        case '/':
            if(b!=0)
                printf("%.2f / %.2f = %.2f",a,b,a/b);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! Invalid operator.");
    }
    return 0;
}