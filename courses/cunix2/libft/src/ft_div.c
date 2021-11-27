/*
 * =====================================================================================
 *
 *       Filename:  ft_div.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 15:47:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
#include <stdlib.h>

div_t ft_div(numer, denom)int numer, denom;
{
    div_t result;

    result.quot = numer / denom;
    result.rem = numer % denom;

    if (numer >= 0 && result.rem < 0)
    {
        ++result.quot;
        result.rem -= denom;
    }

    return result;
}
