#include <stdio.h>

int main()
{

    char text[100];
    gets(text);
    int i = 0;
    char firstchar = text[0];

    while (text[i] != '\0')
    {
        if (text[i] == ' ')
        {
            printf("%c\n", firstchar);
            firstchar = text[i + 1];
        }
        i++;
    }
    printf("%c", firstchar);

    return 0;
}