#include <stdio.h>
#include <limits.h>
#include <float.h>

void hello(void)
{
    printf("hello world\n");
}

void exercise21(void)
{
    int a;
    /* Write program to determine the ranges of char, short, int
    and long variables, both signed and unsigned, by printing approriate values
    from standart headers and by durect computation. Harder if you compute
    them: determine the ranges of the varios floating-point types*/
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
    printf("%d\n", CHAR_BIT);
    printf("%d\n", &a);
}