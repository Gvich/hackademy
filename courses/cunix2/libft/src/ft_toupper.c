/*
 * =====================================================================================
 *
 *       Filename:  ft_toupper.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 13:35:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return ('A' + c - 'a');
    }
    else
    {
        return c;
    }
}
