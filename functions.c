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

    char a, b ,c;
    a = b = 80;
    c = a + b;
    printf("%f\n", c);
    printf("%d\n", INT_MIN);
    printf("%d\n", CHAR_BIT);
    printf("%f\n", FLT_ROUNDS);
    printf("%f\n", __FLT_RADIX__);
    printf("%f\n", FLT_MANT_DIG);
    printf("%f\n", FLT_DIG);
    printf("%f\n", FLT_MIN_EXP);
    printf("%f\n", FLT_MAX_EXP);
    printf("%f\n", __FLT_MIN_10_EXP__);
    printf("%f\n", __FLT_MAX_10_EXP__);
}