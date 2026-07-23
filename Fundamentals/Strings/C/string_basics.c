#include <stdio.h>
#include <string.h>

int main()
{
    // ways to declare
    char s1[] = "hello";
    char s2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // length
    printf("%d\n", (int)strlen(s1));
    // sizeof is not same as length
    printf("%d\n", (int)sizeof(s1));
    // indexing
    s1[0] = 'H';
    printf("%s\n", s1);
    // Traversing
    for (int i = 0; i < (int)strlen(s1); i++)
    {
        printf("%c", s1[i]);
    }
    printf("\n");
    return 0;
}