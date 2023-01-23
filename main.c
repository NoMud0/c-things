#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bitmakssize
{
    size_t size;
    int *bin;
    
};

char string[] = "hello world";

int *charbitmask(char *s, char c)
{
    int i = 0;
    int *b = malloc(strlen(s)*sizeof(int));
    while(s[i])
    {
        b[i] = (s[i] == c)?1:0;
        i++;
    }
    return b;
}

int *reversebitmask(int *b)
{
    for(int i = 0; i < strlen(string); i++)
    {
        b[i] = !b[i];
    }
    return b;
}

int printbitmask(int *b)
{
    for(int i = 0; i < strlen(string); i++)
    {
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}

char *bitmaskreplace(int *b, char true_, char false_)
{
    int i = 0;
    for(;i < strlen(string);)
    {
        string[i] = b[i]?true_:false_;
        i++;
    }
    string[i] = '\0';
    return string;
}

void main()
{
    char *replaced = bitmaskreplace(reversebitmask(charbitmask(string, ' ')), 'r', 'B');
    printf("%s\n", replaced);
}
