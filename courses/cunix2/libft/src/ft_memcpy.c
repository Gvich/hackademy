/*
 * =====================================================================================
 *
 *       Filename:  ft_memcpy.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 17:28:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
 void *ft_memcpy(void *dst, const void *src, int length)
{
    // Typecast src and dest addresses to (char *)
    char *csrc = (char *)src;
    char *cdest = (char *)dst;
  
    // Copy contents of src[] to dest[]
    for (int i = 0; i < length; i++)
    {
        cdest[i] = csrc[i];
    }
    return 0;
}
