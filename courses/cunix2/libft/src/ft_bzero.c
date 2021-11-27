/*
 * =====================================================================================
 *
 *       Filename:  ft_bzero.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/11/21 14:23:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
//#include "libft.h" 


void ft_bzero(void *s, int n)
{
    char *c = s; 
    int i;
    for (i = 0; i < n; ++i)
    {
        c[i] = '\0';
    }
}
