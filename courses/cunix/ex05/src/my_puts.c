/*
 * =====================================================================================
 *
 *       Filename:  my_puts.c
 *
 *    Description: ex05 
 *
 *        Version:  1.0
 *        Created:  10/11/21 16:16:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdio.h>
int my_puts(const char *s)
{
    while(*s)
    {
        if(putchar(*s++) == EOF)
            return EOF;
    }

    if(putchar('\n') == EOF)
        return EOF;

    return 0;
}
