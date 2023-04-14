#include <stdio.h>

int main()
{
    char name[100];
    gets(name);
    char firstname[100] = "\0";
    char lastname[100] = "\0";
    int index = 0;
    int index2 = 0;
    int flag = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            flag = 1;
            continue;
        }

        if (flag == 0)
            firstname[index++] = name[i];
        else
            lastname[index2++] = name[i];
    }

    printf("'%s'\n", firstname);

    printf("'%s'", lastname);

    return 0;
}