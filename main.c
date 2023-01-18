#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string[] = "hello world";
int bin[] = { 0 };

int not_split(char *s, int *b)
{
    int i = 0;
    while(s[i])
    {
        bin[i] = (s[i]!=' ')?1:0;
        i++;
    }
    return 0;
}

int iter()
{
    
    return 0;
}

void main()
{
    not_split(string, bin);
    for(int i = 0; i < strlen(string); i++){
        printf("%d", bin[i]);
    }
}
