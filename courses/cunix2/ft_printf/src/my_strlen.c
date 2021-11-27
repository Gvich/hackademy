/*
 * =====================================================================================
 *
 *       Filename:  my_strlen.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26/11/21 20:12:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
#include "libft.h"
unsigned int my_strlen(char *str)
{
    if (!str)
    {
        return 0;
    }
    int count = 0;
    while (*str != '\0') 
    {
        count++;
        str++;
    }
    return count;
}
