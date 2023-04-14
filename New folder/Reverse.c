#include <stdio.h>
#include <string.h>

int main()
{

    char text[100];
    gets(text);
    int first = 0;
    int last = strlen(text) - 1;
    char temp;

    while (first <= last)
    {
        temp = text[first];
        text[first] = text[last];
        text[last] = temp;
        first++;
        last--;
    }
    printf("%s", text);
    return 0;
}