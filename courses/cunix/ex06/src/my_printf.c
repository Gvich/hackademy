/*
 * =====================================================================================
 *
 *       Filename:  my_printf.c
 *
 *    Description: ex06 
 *
 *        Version:  1.0
 *        Created:  10/11/21 16:47:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
void my_printf(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    while (*fmt != '\0') {
        if (*fmt == 'd') {
            int i = va_arg(args, int);
            printf( "%d\n", i ) ;
        } else if (*fmt == 'c') {
            int c = va_arg(args, int);
            printf( "%c\n", (char)c ) ;
        } else if (*fmt == 'f') {
            double d = va_arg(args, double);
            printf( "%f\n", d ) ;
        }
        ++fmt;
    }

    va_end(args);
}
/*int my_printf(const char *format, ...)*/


