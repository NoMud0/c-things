#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string[] = "hello world";

int *charbitmask(char *string, char c)
{
    int i = 0;
    int *b = malloc(strlen(string)*sizeof(int));
    while(string[i])
    {
        b[i] = (string[i]==c)?1:0;
        i++;
    }
    return b;
}

int reversebitmask(int *a)
{
    for(int i = 0; i < strlen(string); i++)
    {
        a[i] = !a[i];
    }
    return 0;
}

int printbitmask(int *bin)
{
    for(int i = 0; i < strlen(string); i++)
    {
        printf("%d", bin[i]);
    }
    return 0;
}

void main()
{
    int *bin = charbitmask(string, ' ');
    reversebitmask(bin);
    printbitmask(bin);
}
