#include <stdio.h>
int main()
{
    int a = 7;
    int *ptr = &a; /* int* ptr is a 'variable' which stores memory address of variable a*/

    printf("Address of a: %p\n", (void *)ptr);
    printf("*ptr=%d\n", *ptr);
    // using pointer changing the value of variable
    *ptr = 10;
    printf("a=%d\n", a);
    return 0;
}