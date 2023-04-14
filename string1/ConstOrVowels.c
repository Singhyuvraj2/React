#include <stdio.h>

int main()
{
    char text[100];
    int i;

    printf("Enter text: ");
    gets(text);

    printf("Vowel: ");
    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == 'A' || text[i] == 'a' || text[i] == 'E' || text[i] == 'e' || text[i] == 'I' || text[i] == 'i' || text[i] == 'O' || text[i] == 'o' || text[i] == 'U' || text[i] == 'u')
            printf("%c ", text[i]);
    }
    printf("\n");

    printf("Constant: ");
    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
            continue;
        if (!(text[i] == 'A' || text[i] == 'a' || text[i] == 'E' || text[i] == 'e' || text[i] == 'I' || text[i] == 'i' || text[i] == 'O' || text[i] == 'o' || text[i] == 'U' || text[i] == 'u'))
            printf("%c ", text[i]);
    }
    printf("\n");

    return 0;
}