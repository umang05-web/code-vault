#include<stdio.h>
int main()
{
    int x=5, y=10;
    printf("%d%d%d", y,y++,++y);
    printf("%d%d%d", x,++x,x++);
    return 0;

}