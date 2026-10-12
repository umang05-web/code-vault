#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks: ");
    scanf("%d",&marks);

    if (marks >= 90)
     printf("grade A");

    else if (marks >= 80)
     printf("grade B");

    else if (marks >= 70)
     printf("grade C");

    else if (marks >= 60)
     printf("grade D");

    else
     printf("Fail");
     return 0;
    }
   