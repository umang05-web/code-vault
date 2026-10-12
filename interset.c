#include <stdio.h>
#include <math.h>


int main()
{
    float P,R,T,SI,CI,A;
    printf("Enter the principal amount: ");
    scanf("%f",&P); 
    printf("Enter the rate of interest: ");
    scanf("%f",&R);
    printf("Enter the time in years: ");
    scanf("%f",&T);
    SI = (P*R*T)/100;
    A = P * pow((1 + R / 100), T);
    CI = A - P;
    printf("Simple Interest: %.2f\n", SI);
    printf("Compound Interest: %.2f\n", CI);
    return 0;
}