#include <stdio.h>

int main()
{

    char text[100];
    int upper_count = 0;
    int lower_count = 0;
    printf("Enter text: ");
    gets(text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 65 && text[i] <= 90)
            upper_count++;
        else
            lower_count++;
    }

    printf("N0. of Uppercase characters:%d\nNO. of Lowercase charcters:%d", upper_count, lower_count);

    return 0;
}