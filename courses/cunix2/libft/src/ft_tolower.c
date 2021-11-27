/*
 * =====================================================================================
 *
 *       Filename:  ft_tolower.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 13:54:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return ('a' + c - 'A');
    }
    else
    {
        return c;
    }
                
}
