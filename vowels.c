#include <stdio.h>

int main()
{
    char text[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", text);

    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' ||
           text[i] == 'o' || text[i] == 'u' ||
           text[i] == 'A' || text[i] == 'E' || text[i] == 'I' ||
           text[i] == 'O' || text[i] == 'U')
        {
            count++;
        }
    }

    printf("Number of vowels in the string is: %d", count);

    return 0;
}