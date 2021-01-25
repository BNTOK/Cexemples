#include <stdio.h>
#include <limits.h>
#include <float.h>

void hello(void)
{
    printf("hello world\n");
}

void exercise21(void)
{
    /* Write program to determine the ranges of char, short, int
    and long variables, both signed and unsigned, by printing approriate values
    from standart headers and by durect computation. Harder if you compute
    them: determine the ranges of the varios floating-point types
    %f print floating poin %6.2f at least 6 wide and 2 after decimal*/

    printf("SCHAR_MIN\t%d\n", SCHAR_MIN);
    printf("SCHAR_MAX\t%d\n", SCHAR_MAX);
    printf("UCHAR_MAX\t%d\n", UCHAR_MAX);
    printf("SHRT_MIN\t%d\n", SHRT_MIN);
    printf("SHRT_MAX\t%d\n", SHRT_MAX);
    printf("USHRT_MAX\t%d\n", USHRT_MAX);
    printf("INT_MIN\t\t%d\n", INT_MIN);
    printf("INT_MAX\t\t%d\n", INT_MAX);
    printf("UINT_MAX\t%u\n", UINT_MAX);
    printf("LONG_MIN\t%ld\n", LONG_MIN);
    printf("LONG_MAX\t%ld\n", LONG_MAX);
    printf("ULONG_MAX\t%lu\n", ULONG_MAX);
}
