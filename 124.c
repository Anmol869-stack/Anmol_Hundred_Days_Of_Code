#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text appended successfully");

    return 0;
}

