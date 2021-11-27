/*
 * =====================================================================================
 *
 *       Filename:  ft_memset.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 17:02:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
 //#include "libft.h"

void *ft_memset(void *dst, int c, unsigned int len)
{
    
    unsigned char *p = dst;
    while (len--)
    {
        *p++ = (unsigned char)c;
    }
    return dst;

}
