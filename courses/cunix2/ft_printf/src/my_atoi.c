/*
 * =====================================================================================
 *
 *       Filename:  my_atoi.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26/11/21 21:09:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
#include "libft.h"
int my_atoi(const char *str)
{
    char ch;
    int count = 0, res = 0, digit;
    int sign = 1;
    if (*str == '-')
    {
        str++;
        sign = -1;
    }
    
    while ((ch = *str) >= 48 && ch <= 57) 
    {
        str++;
        count++;
    }
    int power = 0;
    while ((power++) < count)
    {
        int multiple = 1;
        digit = *(--str) - 48;
        for (int i = 1; i < power; i++)
        {
            multiple *= 10;
        }
        res += digit * multiple;
    }
    return res * sign;
}
