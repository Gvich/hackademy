/*
 * =====================================================================================
 *
 *       Filename:  ft_strstr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 16:14:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
//#include <stdio.h>
//#include "libft.h"
char *ft_strstr(char *str, char *substr)
{
    const char *a;
    const char *b;

    b = substr;

    if (*b == 0)
    {
        return (char *) str;
    }

    for (; *str != 0; str += 1)
    {
        if (*str != *b) 
        {
            continue;
        }

        a = str;
        while (1) 
        {
            if (*b == 0) 
            {
                return (char *) str;
            }
            if (*a++ != *b++) 
            {
                break;
            }
        }
        b = substr;
    }

    return 0;
}
  
  
