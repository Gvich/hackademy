/*
 * =====================================================================================
 *
 *       Filename:  ft_isascii.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/11/21 18:17:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */

int ft_isascii(int c)
{
    return (c >= 0) && (c <= 127);
}
