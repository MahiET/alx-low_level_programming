0x10. C - Variadic functions

stdarg.h is a header in the C standard library of the C programming language th

at allows functions to accept an indefinite number of arguments.[1] It provides

facilities for stepping through a list of function arguments of unknown number

and type. C++ provides this functionality in the header cstdarg.

The contents of stdarg.h are typically used in variadic functions, though they

may be used in other functions (for example, vprintf) called by variadic functi

ons.

long func(char, double, int, ...);

long func(char a, double b, int c, ...)
{
    /* ... */
}
