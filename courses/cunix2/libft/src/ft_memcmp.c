/*
 * =====================================================================================
 *
 *       Filename:  ft_memcmp.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 17:51:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
int ft_memcmp(void *s1, void *s2, int length)
{
    // unsigned char *c1 = s1;
    // unsigned char *c2 = s2;
    unsigned char *p = s1;
    unsigned char *q = s2;
    int charCompareStatus = 0;
    //If both pointer pointing same memory block
    if (s1 == s2)
    {
        return 0;
    }
    while (length > 0)
    {
        if (*p != *q)
        {  
            charCompareStatus = (*p > *q) ? 1 : -1;
            return charCompareStatus;
        }
        length--;
        p++;
        q++;
    }
    
    return charCompareStatus;
}
