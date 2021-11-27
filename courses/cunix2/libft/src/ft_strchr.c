/*
 * =====================================================================================
 *
 *       Filename:  ft_strchr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/11/21 15:10:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
char *ft_strchr(char *s, int c)
{
    while (*s != (char)c)
    {
        if (!*s++)
        {
            return 0;
        }
    }
    return (char *)s;
}



